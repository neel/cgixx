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
#ifndef CSSBUILDER_H
#define CSSBUILDER_H

#include <string>
#include <map>
#include <sstream>

using std::string;
using std::map;
using std::stringstream;

/**
	@author Neel Basu <neel@zigmoyd>
*/
class CSSBuilder{
	private:
		typedef map<string, string> RuleSet;
		typedef map<string, RuleSet> CSSStruct;
		RuleSet ruleSetHolder;
		CSSStruct cssStruct;
		mutable stringstream& css;
		mutable bool commited;
	public:
    CSSBuilder(stringstream& cssStream);
    ~CSSBuilder();
    void commit() const;
    bool isCommited() const;
	public:
    CSSBuilder& makeSelector(const string& selectorName);
    CSSBuilder& copyFromSelector(const string& selectorName);
    CSSBuilder& addToSelector(const string& selectorName);
		CSSBuilder& getSelector(const string& selectorName);
		bool selectorExists(const string& selectorName) const;
		CSSBuilder& removeSelector(const string& selectorName);
	public:
    CSSBuilder& addRule(const string& key, const string& val);
    string getRule(const string& key) const;
    bool ruleExists(const string& key) const;
    CSSBuilder& removeRule(const string& key);
	public:
		void end();
		void operator++(int);
};

#endif
