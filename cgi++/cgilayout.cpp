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
#include "cgilayout.h"

CGILayout::CGILayout():cssBldr(css){

}

CGILayout::CGILayout(const CGILayout& l):cssBldr(css){
	*this = l;
}


CGILayout::~CGILayout(){

}

/*!
	\fn CGILayout::removeParams(const string& key)
*/
void CGILayout::removeParams(const string& key){
	mParams.erase(key);
}


/*!
	\fn CGILayout::addParam(const string& key, const string& Var)
*/
void CGILayout::addParam(const string& key, const string& val){
	mParams.insert(make_pair(key, val));
}

/*!
	\fn CGILayout::setParam(const string& key, const string& Var)
*/
void CGILayout::setParam(const string& key, const string& val){
	layoutParamsMap::iterator it = mParams.find(key);
	if(it != mParams.end()){
		removeParams(key);
	}
	addParam(key, val);
}

/*!
    \fn CGILayout::setTitle(const string& title)
 */
void CGILayout::setTitle(const string& title){
	setParam("title", title);
}

/*!
	\fn CGILayout::setBody(const stringstream& content)
*/
void CGILayout::setBody(const stringstream& content){
	string __test= content.str();///@todo Testing
	mBody << content.str();
}


/*!
    \fn CGILayout::addJavaScript(const string& jsFileName)
 */
void CGILayout::addJavaScript(const string& jsFileName){
	addParam("js", jsFileName);
}


/*!
    \fn CGILayout::addStyleSheet(const string& cssFileName)
 */
void CGILayout::addStyleSheet(const string& cssFileName){
	addParam("css", cssFileName);
}

/*!
    \fn CGILayout::addMeta(const string& metaData)
 */
void CGILayout::addMeta(const string& metaData){
	addParam("meta", metaData);
}

/*!
    \fn CGILayout::printMeta()
 */
void CGILayout::printMeta() const{
	for(layoutParamsMap::const_iterator it=mParams.find("meta");(it != mParams.end() && it !=  mParams.upper_bound("meta"));it++){
		res<<"\t\t"<<it->second<<endl;
	}
}

/*!
    \fn CGILayout::printJs()
 */
void CGILayout::printJs() const{
	for(layoutParamsMap::const_iterator it=mParams.find("js");(it != mParams.end() && it !=  mParams.upper_bound("js"));it++){
		res<<"\t\t"<<"<script language='javaScript' type='text/javascript' src='"<<it->second<<"'></script>"<<endl;
	}
}

/*!
    \fn CGILayout::printCss()
 */
void CGILayout::printCss() const{
	for(layoutParamsMap::const_iterator it=mParams.find("css");(it != mParams.end() && it !=  mParams.upper_bound("css"));it++){
		res<<"\t\t"<<"<link rel='StyleSheet' href='"<<it->second<<"' title='Contemporary' type='text/css' />"<<endl;
	}
}

string CGILayout::getTitle() const{
	for(layoutParamsMap::const_iterator it=mParams.find("title");(it != mParams.end() && it !=  mParams.upper_bound("title"));it++){
		return it->second;
	}
	return string("CGI++ Application");
}



/*!
    \fn CGILayout::layout()
 */
void CGILayout::layout() const{
	res<<"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">"<<endl;
	res<<"<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\">"<<endl;
	res<<"\t"<<"<head>"<<endl;

	printMeta();
	res<<"\t\t"<<"<title>"<<getTitle()<<"</title>"<<endl;
	printJs();
	printCss();
	const string& jsStr = js.str();

	if(jsStr.length()>1){
		res<<"<script language='javaScript' type='text/javascript'>"<<endl;
		res<<jsStr<<endl;
		res<<"</script>"<<endl;
	}

	cssBldr.commit();
	const string& cssStr = css.str();
	if(cssStr.length()>1){
		res<<"<style type='text/css'>"<<endl;
		res<<cssStr<<endl;
		res<<"</style>"<<endl;
	}

	res<<"\t"<<"</head>"<<endl;
	res<<"\t"<<"<body>"<<endl;

	res<<mBody.str()<<endl;

	res<<"\t"<<"</body>"<<endl;
	res<<"</html>"<<endl;
}

const stringstream& CGILayout::getObStream() const{
	return res;
}

CGILayout& CGILayout::operator=(const CGILayout& l){
	*this = l;
}


