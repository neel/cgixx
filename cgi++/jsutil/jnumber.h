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
#ifndef JSNUMBER_H
#define JSNUMBER_H

#include <../var.h>
#include <string>
#include "jtype.h"

namespace Js {

/**
	@author Neel Basu <neel@zigmoyd>
*/
class Number : public Js::JType{
	protected:
		Var num;
	public:
    Number();
		Number(unsigned int val);
		Number(unsigned long val);
		Number(unsigned short val);
		Number(double val);
		Number(float val);
		Number(int val);
		Number(short val);
		Number(long val);
		//Number(const Var& var);
    ~Number();
	public:
		int toInt() const{return num.toInt();}
		long toLong() const{return num.toLong();}
		float toFloat() const{return num.toFloat();}
		double toDouble() const{return num.toDouble();}
		std::string toString() const{return num.toString();}
	public:
		/*
			//Type Conversion operator overloads are disabled for the followng reason
			//+, - etc.. operator overloads will not work cause it will conflict as it will not understand with which it will do the arithmatic operation
			//after converting them to int or directly by operator overloads
			operator int const(){return toInt();}
			operator long const(){return toLong();}
			operator float const(){return toFloat();}
			operator double const(){return toDouble();}
			operator std::string const(){return toString();}
		*/
	public:
		friend Js::Number operator+(const Js::Number& l, const Js::Number& r);
		friend Js::Number operator-(const Js::Number& l, const Js::Number& r);
		friend Js::Number operator*(const Js::Number& l, const Js::Number& r);
		friend Js::Number operator/(const Js::Number& l, const Js::Number& r);
		Js::Number& operator+=(const Js::Number& r);
		Js::Number& operator-=(const Js::Number& r);
		Js::Number& operator*=(const Js::Number& r);
		Js::Number& operator/=(const Js::Number& r);
	public:
		virtual std::string commit() const;
};

}

#endif
