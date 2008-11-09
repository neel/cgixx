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
#ifndef APPREQUEST_H
#define APPREQUEST_H
#include <iostream>
#include <cstring>
#include <vector>
#include <ctime>
#include <map>
#include "httpheader.h"
#include "globaldef.h"
#include "request.h"
#include "httputil.h"
#include "var.h"
#include "paramsmap.h"
#include "stringlist.h"

using std::vector;
using std::map;
using std::cout;

/**
 * The Global Request Object.
 * Handles GET/POST/COOKIE Requests
 * Holds a non-const referencs to the global HTTPHeader Object in headerRef private member variable
 *
 * @author Neel Basu <neel@zigmoyd>
 */
class Request: public RawRequest{
	private:
		/*!
			a reference to global HTTP header Object
			initialized by Constructor.
		*/
		HttpHeader& headerRef;
		ParamsMap __params(const char* rawQuery, char sep='&');
		ParamsMap __getParams();
		ParamsMap __postParams();
    ParamsMap __cookieParams();
	public:
		static const std::string weekDays[7];///Weekdays in 3character First Caps Case format
		ParamsMap get;///Hold's GET request parameters key value pairs
		ParamsMap post;///POST request parameters key value pairs
    ParamsMap cookie;///cookie's key value pairs
		StringList pathInfo;///Path Info from parent Class
	public:
    Request(HttpHeader& headerRefObj);
    ~Request();
    bool isGet();
    bool isPost();
    void setCookie(const string& key, const Var& val, const string& domain="", const string& path="/", const time_t& exp=0x0);
};
const Var __params(ParamsMap&, const std::string&);
/*!
	\internal
	Used for testing. for printing a ParamsMap object to cout
*/
void printMap(ParamsMap&);
/*!
	\internal
	Used for testing. for printing a StringList object to cout
*/
void printMap(StringList&);
#define initCGI()		HttpHeader header;Request request(header);
#define $_POST(k)		__params(request.post,	k)
#define $_GET(k)		__params(request.get,		k)
#define $_COOKIE(k)	__params(request.cookie,k)
#define $_SESSION(k) session.get(k)
#endif
