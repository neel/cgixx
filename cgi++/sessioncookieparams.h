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
#ifndef SESSIONCOOKIEPARAMS_H
#define SESSIONCOOKIEPARAMS_H

#include <string>
#include "sessionconfig.h"

using std::string;

//class SessionConfig;

/**
 * Holds the Session Cookie parameters
 * Should be accessed through   request.session.cookieParams   Object Chain
 *
 * @author Neel Basu <neel@zigmoyd>
 */
class sessionCookieParams{
	public:
    sessionCookieParams();
    ~sessionCookieParams();
	protected:
    bool secure;
    const string& domain;
    const string& path;
    bool httpOnly;
    unsigned long lifeTime;
};

#endif
