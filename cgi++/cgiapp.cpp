/***************************************************************************
 *   Copyright (C) 2008 by Neel Basu   *
 *   neel@zigmoyd   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "cgiapp.h"

CGIApp::CGIApp():request(header), session(request), mSegment("/"), segmentCount(0){
	segmentCount = request.pathInfo.size();
	layout = auto_ptr<CGILayout>(new CGILayout);
}

CGIApp::CGIApp(CGILayout* l):request(header), session(request), mSegment("/"), segmentCount(0){
	segmentCount = request.pathInfo.size();
	layout = auto_ptr<CGILayout>(l);
}


CGIApp::~CGIApp(){

}

/*!
	returns the total number of segments.
*/
int CGIApp::getSegmentCount() const{
	return segmentCount;
}

/*!
	\fn CGIApp::start()
	start method.
	System's own initialization method.You can't override start() method.
	it will get automatically called to initialize CGIApp System.
	e.g. make request, header, session member variable(s).
*/
void CGIApp::start(){
	session.start();
	header.addHeader("Content-Type", "text/html");
}


/*!
	\fn CGIApp::stop()
	stop method.
	System's own stop method.You can't override stop() method.
	it will get automatically called to when your subMain() finishes.
	it Commits all session Data.
*/
void CGIApp::stop(){
	session.commit();
}


/*!
	\fn CGIApp::exec()
	meant to be called from Main.
	\code
	class myApp: public CGIApp{
		public:
			void subMain();
	}
	......
	int main(int argc, char** argv){
		myApp app(argc, argv);
		return app.exec();
	}
	\endcode
*/
int CGIApp::exec(){
	try{
		start();
		init();

		string seg = detectRoute();
		if(seg == "/"){
			subMain();
		}else{
			callRoute(seg);
		}
		header.commit();

		//cout<<res.str();
		layout->setBody(res);
		layout->layout();
		cout<<layout->getObStream().str();
		res.flush();

		destroy();
		stop();

		return 0;
	}catch(const std::exception& e){
		if(!header.isCommited()){
			cout<<"Content-Type: text/html"<<endl<<endl;
		}
		cout<<"<pre style='color: red;background-color: #efefef;border: 1px solid red;font-size: 12px'>"<<endl;
		cout<<"<b>UnCaught Exception Raised:</b>"<<endl;
		cout<<"Exception Type:\t<b>"<<typeid(e).name()<<"</b>"<<endl;
		cout<<"what():        \t"<<e.what()<<endl;
		cout<<"</pre>"<<endl;
	}
}

/*!
	\fn CGIApp::init()
	Option Initialization method.
	If you have this method on your own sub Class init method of that one will be invoked.
	The default init() method provided by base class CGIApp::init() does nothing.
*/
void CGIApp::init(){

}

/*!
	\fn CGIApp::destroy()
	Optional onDestroy Method.
	If you have a destroy() method on your own sub class that method will be invoked.
	the default destroy() method CGIApp::destroy() does nothing.
*/
void CGIApp::destroy(){

}

void CGIApp::setRoute(const string& urlpath, callback fn){
	clbk[urlpath] = fn;
}

bool CGIApp::routeExists(const string& urlPath) const{
	callbackMap::const_iterator it = clbk.find(urlPath);
	bool __test = it != clbk.end();///@todo testing
	return (it != clbk.end());
}

bool CGIApp::removeRoute(const string& urlPath){
	callbackMap::iterator it = clbk.find(urlPath);
	if(it != clbk.end()){
		clbk.erase(it);
		return true;
	}
	return false;
}

bool CGIApp::callRoute(const string& urlPath){
	if(routeExists(urlPath)){
		mSegment = urlPath;
		segmentCount = request.pathInfo.size()-split(trim(mSegment, '/'), '/').size();
		(this->*(this->clbk[urlPath]))();
		return true;
	}
	return false;
}

/*!
	Reads the url entered by the user and returns appropiate segment key which is callbck map's key.
*/
string CGIApp::detectRoute() const{
	for(int i=getSegmentCount();i>=0;i--){
		string tSeg = segment(i, true, true).toString();
		if(routeExists(tSeg)){
			return tSeg;
		}
	}
	return "/";
}

/*!
	returns an url segment.
	e.g. if my url is \c http://localhost/bin/myapp.bin/x/y/z/m/n/o/p  the following code will produce.
	\code
	for(int j=0;j<getSegmentCount()+1;j++){
		res<<j<<" | "<<segment(j)<<" | "<<segment(j, true)<<" | "<<segment(j, true, true)<<" | "<<segment(j, false, true)<<endl<<"<br />";
	}
	\endcode
	the following Output
	\code
		0 | z | /z | /x/y/z | /x/y/z
		1 | m | /z/m | /x/y/z/m | /x/y/z/m
		2 | n | /z/m/n | /x/y/z/m/n | /x/y/z/m/n
		3 | o | /z/m/n/o | /x/y/z/m/n/o | /x/y/z/m/n/o
		4 | p | /z/m/n/o/p | /x/y/z/m/n/o/p | /x/y/z/m/n/o/p
		5 |   | /z/m/n/o/p | /x/y/z/m/n/o/p | /x/y/z/m/n/o/p
		6 |   | /z/m/n/o/p | /x/y/z/m/n/o/p | /x/y/z/m/n/o/p
		7 |   | /z/m/n/o/p | /x/y/z/m/n/o/p | /x/y/z/m/n/o/p
	\endcode
	\attention when you use segment(j, false, true) its automatically converted to segment(j, true, true) cause segment(j, false, true) has no sense
*/
Var CGIApp::segment(unsigned int n, bool concat, bool fromRoot) const{
	if(fromRoot)concat=true;///@internal if fromRoot is true concat is also turned to true.

	StringList tLoc;
	if(mSegment.length() > 1){
		tLoc = split(trimRight(mSegment, '/').substr(1), '/');
	}else{
		tLoc = split("", '/');
	}

	int tBrkPos=fromRoot ? 0 : tLoc.size();

	string tSeg;
	tSeg = (tBrkPos+n >= (int)request.pathInfo.size()) ? "" : request.pathInfo.at(tBrkPos+n);
	//tSeg = (tBrkPos+n > ((int)request.pathInfo.size()-1)) ? "" : request.pathInfo.at(tBrkPos+n);

	if(!concat){
		return Var(tSeg);
	}

	string tSegJoin="/";
	int ub = fromRoot ? (tBrkPos+n+tLoc.size()) : (tBrkPos+n);
	for(int i=tBrkPos;i<=ub;i++){
		if(i >= request.pathInfo.size())break;
		tSegJoin += request.pathInfo.at(i);
		if(i != request.pathInfo.size()-1){
			tSegJoin += string("/");
		}
	}
	return Var(trimRight(tSegJoin, '/'));
}

void CGIApp::setLayout(CGILayout* l){
	layout.reset();
	layout = auto_ptr<CGILayout>(l);
}

