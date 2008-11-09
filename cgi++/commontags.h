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
#ifndef COMMONTAGS_H
#define COMMONTAGS_H

#include <string>
#include "htmltag.h"
#include "httputil.h"
#include "var.h"

using std::string;

/**
	@author Neel Basu <neel@zigmoyd>
*/
class b : public HtmlTag{
	public:
    b();
};

class i : public HtmlTag{
	public:
    i();
};

class u : public HtmlTag{
	public:
    u();
};

class br : public HtmlTag{
	public:
    br();
};

class hr : public HtmlTag{
	public:
    hr();
};

class a : public HtmlTag{
	public:
		a();
    a(const string& link);
		HtmlTag& setHref(const string& link);
		Var getHref() const;
		HtmlTag& setTitle(const string& title);
		Var getTitle() const;
};

class span : public HtmlTag{
	public:
    span();
};

class dv : public HtmlTag{
	public:
    dv();
};

class pre : public HtmlTag{
	public:
    pre();
};

class label : public HtmlTag{
	public:
    label();
    label(const string& fr);
		HtmlTag& setFor(const string& fr);
		Var getFor() const;
};

class h : public HtmlTag{
	private:
		unsigned short int hLevel;
	public:
    h(unsigned short int l);
};

class form : public HtmlTag{
	public:
    form();
		form(const string& method, const string& action="");
    string openMultiPart();
    HtmlTag& setAction(const string& action);
    HtmlTag& setMethod(const string& method);
};

class input: public HtmlTag{
	public:
		input();
		input(const string& type, const string& name="", const Var& value="");
		HtmlTag& setType(const string& type);
		HtmlTag& setValue(const Var& value);
};

class textbox: public input{
	public:
		textbox();
};

class password: public input{
	public:
		password();
};

class hidden: public input{
	public:
		hidden();
};

class uploadbox: public input{
	public:
		uploadbox();
};

class checkbox: public input{
	public:
		checkbox();
};

class radio: public input{
	public:
		radio();
};

class submit: public input{
	public:
		submit();
};

class reset: public input{
	public:
		reset();
};

#endif
