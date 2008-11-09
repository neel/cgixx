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
#ifndef JSJVAR_H
#define JSJVAR_H

#include <string>
#include <sstream>
#include "../var.h"

using std::string;

namespace Js{
	class Number;
	class String;
	class Array;
	class Object;
	class Function;
	class Bool;
}

namespace Js {

/**
	@author Neel Basu <neel@zigmoyd>
*/
class JVar{
	protected:
		bool isVar;
	private:
		string lhs;///left Hand the variable Name. e.g. the x part of var x = rhs
		Js::JVar* rhs;///The RHS of var. e.g. the rhs part of var x = rhs
	public:
    JVar();
		JVar(Var&);
		JVar(Var*);
		JVar(JVar&);
		JVar(JVar*);
		JVar(int);
		JVar(long);
		JVar(double);
		JVar(const char*);
		JVar(const std::string& l);
    virtual ~JVar();
	public:
    virtual const Js::JVar* const value() const;
    virtual Js::JVar* value();
    virtual void value(Js::JVar* val);
    const string& varName() const;
    Js::JVar& varName(const string& varName);
	public:
    virtual string commit() const;///returns the string equivalent thats going to be used as javascript on clinet side
	public:
		virtual const char* toStream() const;
		friend std::stringstream& operator<<(std::stringstream& o, const Js::JVar& v);
	public:
		Js::JVar& operator=(Js::JVar* r);
};

}

#endif

