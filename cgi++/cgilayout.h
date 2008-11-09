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

#ifndef CGILAYOUT_H
#define CGILAYOUT_H
#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include "stringlist.h"
#include "cssbuilder.h"

using std::string;
using std::vector;
using std::map;
using std::multimap;
using std::endl;
using std::stringstream;

/**
	@author Neel Basu <neel@zigmoyd>
*/
class CGILayout{
	protected:
		typedef multimap<string, string> layoutParamsMap;
		stringstream mBody;
    mutable stringstream res;
		layoutParamsMap mParams;
	public:
		stringstream js;
		stringstream css;
	public:
		CSSBuilder cssBldr;
	public:
		CGILayout& operator=(const CGILayout& l);
	public:
    CGILayout();
		CGILayout(const CGILayout& l);
    ~CGILayout();
		void addParam(const string& key, const string& val);
		void setParam(const string& key, const string& val);
    void removeParams(const string& key);
    void setTitle(const string& title);
    void setBody(const stringstream& content);
    void addJavaScript(const string& jsFileName);
    void addStyleSheet(const string& cssFileName);
		void addMeta(const string& metaData);
	public:
		virtual void layout() const;
	protected:
    void printMeta() const;
		void printJs() const;
		void printCss() const;
	public:
		string getTitle() const;
		const stringstream& getObStream() const;
};

#endif
