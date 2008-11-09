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
#ifndef JDATAADAPTER_H
#define JDATAADAPTER_H
#include <jtype.h>
#include <../var.h>
#include <jnumber.h>
#include <jstring.h>
#include <jbool.h>
#include <jfunction.h>
#include <jarray.h>
#include <jobject.h>

/**
	@author Neel Basu <neel.basu.z@gmail.com>
*/
namespace Js{
class JDataAdapter{
	private:
		Js::JType* elem;
	public:
    JDataAdapter(Js::JType* e);
    ~JDataAdapter();
	public:
		static bool operationPermited(Js::JType::JDataType typeName, const Var& opCode);
	public:
    Js::JDataAdapter& operator=(Js::JType* r);
    Js::JDataAdapter& operator=(const Js::JType& r);
    Js::JDataAdapter& operator+=(const Js::JType& r);
    Js::JDataAdapter& operator+=(Js::JType* r);
    Js::JDataAdapter& operator-=(const Js::JType& r);
    Js::JDataAdapter& operator-=(Js::JType* r);
    Js::JDataAdapter& operator*=(const Js::JType& r);
    Js::JDataAdapter& operator*=(Js::JType* r);
    Js::JDataAdapter& operator/=(const Js::JType& r);
    Js::JDataAdapter& operator/=(Js::JType* r);
    Js::JDataAdapter& operator++();
    Js::JDataAdapter& operator++(int);
    Js::JDataAdapter& operator--();
    Js::JDataAdapter& operator--(int);
		bool operator<(const Js::JType& r);
    bool operator>(Js::JType* r);
		bool operator<=(const Js::JType& r);
    bool operator>=(Js::JType* r);
const Js::JType& operator[](size_t n) const;
Js::JType& operator[](size_t n);
    friend Js::JDataAdapter operator+(const Js::JType& l, const Js::JDataAdapter& r);
    friend Js::JDataAdapter operator*(const Js::JType& l, const Js::JDataAdapter& r);
    friend Js::JDataAdapter operator/(const Js::JType& l, const Js::JDataAdapter& r);
    friend Js::JDataAdapter operator-(const Js::JType& l, const Js::JDataAdapter& r);
    friend Js::JDataAdapter operator+(const Js::JDataAdapter& l, const Js::JType& r);
    friend Js::JDataAdapter operator*(const Js::JDataAdapter& l, const Js::JType& r);
    friend Js::JDataAdapter operator/(const Js::JDataAdapter& l, const Js::JType& r);
    friend Js::JDataAdapter operator-(const Js::JDataAdapter& l, const Js::JType& r);
	public:
    Js::JType* operator->() const throw();
    Js::JType& operator*() const throw();
	public:
		Js::JType* toJObj() const;
    Js::Array toJArray() const;
    Js::Bool toJBool() const;
    Js::Function toJFunction() const;
    Js::Number toJNumber() const;
    Js::Object toJObject() const;
    Js::String toJString() const;
};
}
#endif
