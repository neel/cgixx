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
#include "apprequest.h"

const std::string Request::weekDays[7]={"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

/*Request::Request(): RawRequest(), headerRef(*(new HttpHeader)){

}*/

/*!
	Initializes the HTTP Header Object
	initializes get, post, cookie member variables by invoking __getParams(), __postParams(), and __cookieParams()
*/
Request::Request(HttpHeader& headerRefObj):headerRef(headerRefObj), RawRequest(){
	get  = __getParams();
	post = __postParams();
	cookie = __cookieParams();
	string pInfo = trimRight(getPathInfo(), '/');
	try{
		pInfo = pInfo.substr(1);
		pathInfo = split(pInfo, '/');
	}catch(...){
		pathInfo = split("", '/');
	}
	//session = Session(*this);
}

Request::~Request(){

}

bool Request::isGet(){
	return (strcmp("GET", getRequestMethod()) <= 0);
}

bool Request::isPost(){
	return (strcmp("POST", getRequestMethod()) <= 0);
}

/*!
	\internal
	parses the Request's query string to build the ParamsMap
	get's internally used by __getParams(), __postParams(), and __cookieParams()
*/
ParamsMap Request::__params(const char* rawQuery, char sep){
	StringList pair = split(rawQuery, sep);
	ParamsMap keyVal;
	if(pair.size() >= 1){
		StringList::iterator itr;
		for(itr = pair.begin();itr != pair.end();itr++){
			StringList pr = split(*itr, '=');
			keyVal[trim(UrlDecodeString(pr.at(0)))] = (pr.size() >= 2) ? Var(trim(UrlDecodeString(pr.at(1)))) : Var("");
		}
	}
	return keyVal;
}

/*!
	Read's HTTP Request's GET directive and returns key Value pair's map.
	Its return value is stored into get member variable
*/
ParamsMap Request::__getParams(){
	return __params(getQueryString());
}

/*!
	Read's HTTP Request's POST directive and returns key Value pair's map.
	Its return value is stored into post member variable
*/
ParamsMap Request::__postParams(){
	ParamsMap dummy;
	if(isPost()){
		int len = atoi(contentLength);
		string postQueryBuff;
		if(len >= 1){
			std::cin>>postQueryBuff;
			return __params(postQueryBuff.c_str());
		}
		return dummy;
	}
	return dummy;
}

/*!
	Read's HTTP Request's COOKIE directive and returns key Value pair's map.
	Its return value is stored into cookie member variable
*/
ParamsMap Request::__cookieParams(){
	const char* rawCookieStr = getenv("HTTP_COOKIE") == 0x0 ? "" : getenv("HTTP_COOKIE");
	return __params(rawCookieStr, ';');
}

/*!
	Set a Cookie.
	Created the cookie string and appends it to the cookie ParamsMap member variable
*/
void Request::setCookie(const string& key, const Var& val, const string& domain, const string& path, const time_t& exp){
	string cookieStr = key+"="+val+"; ";
	if(domain != ""){
		cookieStr += "domain="+domain+";";
	}
	cookieStr += " path="+path+";";
	if(exp != 0x0){
		cookieStr += " expires: ";
		char* timeBuff;
		cookieStr += strftime(timeBuff, 30, "%a, %d-%b-%y %x GMT", gmtime(&exp));
	}
	headerRef.addHeader("Set-cookie", cookieStr);
}

/*!
	\internal
	short function that is internally used to support macros like $_GET, $_POST, $_COOKIE
*/
const Var __params(ParamsMap& handle, const std::string& key){
	ParamsMap::iterator it = handle.find(key);
	Var __testRet = ((it != handle.end()) ? it->second : Var(""));///@todo Testing
	return ((it != handle.end()) ? it->second : Var(""));
}

