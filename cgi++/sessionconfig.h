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
#ifndef SESSIONCONFIG_H
#define SESSIONCONFIG_H

#include <string>

using std::string;

#define DEFAULT_SESS_PATH "/tmp/cgi++/sess"

/**
 * Session Configuration Static Class
 *
 * @author Neel Basu <neel@zigmoyd>
 */
class SessionConfig{
	public:
    SessionConfig();
    ~SessionConfig();
	public:
		static string sessPath;
    static string path;
    static string name;
    static bool secure;
    static bool httpOnly;
    static long lifeTime;
    static string domain;
		static bool	autoStart;
	public:
    static bool isHttpOnly(){return httpOnly;}
    static bool isSecure(){return secure;}
		static bool isAutoStarted(){return autoStart;}
    static const long& getLifetime(){return lifeTime;}
    static const string& getDomain(){return domain;}
    static const string& getName(){return name;}
    static const string& getPath(){return path;}
		static const string& getSessPath(){return sessPath;}
		static void setSessPath(const string& path){sessPath=path;}
		static void setPath(const string& p){path = p;}
		static void setName(const string& n){name = n;}
		static void setDomain(const string& d){domain = d;}
		static void setLifeTime(const long& l){lifeTime = l;}
		static void setSecure(bool secureStatus){secure = secureStatus;}
		static void setHttpOnly(bool httpOnlyStatus){httpOnly = httpOnlyStatus;}
		static void setAutoStart(bool autoStartStatus){autoStart = autoStartStatus;}
};

#endif
