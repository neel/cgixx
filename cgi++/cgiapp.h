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
#ifndef CGIAPP_H
#define CGIAPP_H
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <map>
#include <memory>
#include <exception>
#include <typeinfo>
#include "session.h"
#include "apprequest.h"
#include "sessionconfig.h"
#include "cgilayout.h"
#include "htmltag.h"
#include "commontags.h"

using std::cout;
using std::endl;
using std::stringstream;
using std::map;
using std::auto_ptr;

/**
	@author Neel Basu <neel@zigmoyd>
*/
class CGIApp{
	public:
		typedef void (CGIApp::*callback)(void);
	private:
		string mSegment;
		int segmentCount;
		typedef map<std::string, callback> callbackMap;
		callbackMap clbk;
		bool callRoute(const string& urlPath);
		string detectRoute() const;
	public:
		int getSegmentCount() const;
	public:
		void setRoute(const string& urlpath, callback fn);
		bool routeExists(const string& urlPath) const;
		bool removeRoute(const string& urlPath);
		Var segment(unsigned int n, bool concat=false, bool fromRoot=false) const;
	public:
		Session session;
		Request request;
		HttpHeader header;
	protected:
		mutable stringstream res;
	public:
		CGIApp();
		CGIApp(CGILayout* l);
		~CGIApp();
		void start();
		virtual void init();
		virtual void subMain() = 0;
		virtual void destroy();
		void stop();
		int exec();
	public:
		auto_ptr<CGILayout> layout;
	public:
		void setLayout(CGILayout* l);
};

#define CALLBACK(fn) reinterpret_cast<CGIApp::callback>(fn)

#endif
