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
#ifndef SESSION_H
#define SESSION_H

#include <vector>
#include <map>
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <streambuf>
#include "sessionconfig.h"
#include "sessioncookieparams.h"
#include "cgiexception.h"
#include "var.h"
#include "apprequest.h"
#include "base64.h"
#include "httputil.h"
#include "md5.h"
#include "file.h"
#include "paramsmap.h"
#include "stringlist.h"

using std::vector;
using std::map;
using std::ifstream;
using std::ofstream;

/**
 * Global Session Classes which should be accessed through the request Object.
 * stores all sessions as ParamsMap in item member variable
 * holds a reference to global request object
 *
 * @author Neel Basu <neel@zigmoyd>
 */
class Session{
	public:
    Session(Request& req);
		Session(Request& req, const string&);
    ~Session();
		void setRequestHandle(Request&);
    void start();
    void commit();
    const string& getSessPath() const;
    void setSessPath(const string& path);
	private:
		string createEmptySessionFile() const;
		string fullSessionPath(const string& sessId) const;
		ParamsMap readSessionData() const;
		void dumpSessionData();
	private:
		Request& requestRef;///a reference to global request object
		string sessPath;///Path to the directory where all session file(s) are going to be stored
    string id;///Holds the session ID
		string name;///name of the Session variable
		string sessFileName;///Holds the session File Name
	public:
    sessionCookieParams cookieParams;///stores all cookie parameters with which the session ID cookie will be sent
		ParamsMap item;///stores all sessions
	public:
		bool add(const string&, const Var&);
		bool exists(const string&);
		bool remove(const string&);
		bool modify(const string&, const Var&);
		const Var get(const string&) const;
    bool sessionIdProvided() const;
    Var getSessionId() const;
    bool set(const string& key, const Var& val);
};

#endif
