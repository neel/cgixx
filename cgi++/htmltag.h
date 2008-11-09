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
#ifndef HTMLTAG_H
#define HTMLTAG_H

#include <string>
#include <map>
#include "var.h"
#include "paramsmap.h"
#include "htmltagautocompleter.h"

using std::string;
using std::map;

#define TAG_PAIR true
#define TAG_STANDALONE false
#define QUOTE_SINGLE '\''
#define QUOTE_DOUBLE '"'

/**
	@author Neel Basu <neel@zigmoyd>
*/
class HtmlTag{
	private:
		bool mTagType;///@internal Holds either TAG_PAIR or TAG_STANDALONE defaults to TAG_PAIR
		string mTagName;
		ParamsMap mAttr;
	public:
		char quoteType;///@internal either it will hold QUOTE_SINGLE or QUOTE_DOUBLE
	public:
    HtmlTag(bool tagType=TAG_PAIR);
		HtmlTag(const string& tagName, bool tagType=TAG_PAIR);
    ~HtmlTag();
	protected:
    virtual string makeAttr() const;
	public:
		void setTagName(const string& tagName);
		const string& getTagName() const;
	public:
		virtual HtmlTag& setAttr(const string& key, const Var& val);
		virtual Var getAttr(const string& key) const;
		virtual HtmlTag& removeAttr(const string& key);
	public:
		virtual HtmlTag& setId(const Var& val);
		virtual HtmlTag& setClass(const Var& val);
		virtual HtmlTag& setName(const Var& val);
	public:
		virtual Var getId() const;
		virtual Var getClass() const;
		virtual Var getName() const;
	public:
		virtual string open() const;
		virtual string close() const;
	public:
		string autoComplete() const;
		friend ostream& operator<<(ostream& o, const HtmlTag& t);
};

#endif
