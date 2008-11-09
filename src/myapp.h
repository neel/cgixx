/***************************************************************************
 *   Copyright (C) 2008 by Neel Basu   *
 *   neel.basu.z@gmail.com   *
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
#ifndef MYAPP_H
#define MYAPP_H

#include <cgiapp.h>
#include <jsutil/jvar.h>
#include <jsutil/jnumber.h>
#include <jsutil/jstring.h>
#include <jsutil/jfunction.h>
#include <jsutil/jarray.h>
#include <jsutil/jobject.h>

/**
	@author Neel Basu <neel.basu.z@gmail.com>
*/
class MyApp : public CGIApp{
	public:
    MyApp();
    ~MyApp();
    void subMain();
};

#endif
