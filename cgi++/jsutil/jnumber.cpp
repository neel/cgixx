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
#include "jnumber.h"

/*
	never take my heart so away
	never take a breath so deep
	never let your eyes cry
	never keep my lips so dry
	never stop sending me sms.
*/

namespace Js {

Number::Number() : Js::JType(JTYPE_NUMBER), num(Var(0)){

}

Number::Number(unsigned int val) : Js::JType(JTYPE_NUMBER), num(Var(val)){

}
Number::Number(unsigned long val) : Js::JType(JTYPE_NUMBER), num(Var(val)){

}
Number::Number(unsigned short val) : Js::JType(JTYPE_NUMBER), num(Var(val)){

}
Number::Number(double val) : Js::JType(JTYPE_NUMBER), num(Var(val)){

}
Number::Number(float val) : Js::JType(JTYPE_NUMBER), num(Var(val)){

}
Number::Number(int val) : Js::JType(JTYPE_NUMBER), num(Var(val)){

}
Number::Number(short val) : Js::JType(JTYPE_NUMBER), num(Var(val)){

}
Number::Number(long val) : Js::JType(JTYPE_NUMBER), num(Var(val)){

}
Number::~Number(){

}

//{ Operator Overloads
Js::Number operator+(const Js::Number& l, const Js::Number& r){
	return Js::Number(l.num.toDouble()+r.num.toDouble());
}

Js::Number operator-(const Js::Number& l, const Js::Number& r){
	return Js::Number(l.num.toDouble()-r.num.toDouble());
}

Js::Number operator*(const Js::Number& l, const Js::Number& r){
	return Js::Number(l.num.toDouble()*r.num.toDouble());
}

Js::Number operator/(const Js::Number& l, const Js::Number& r){
	return Js::Number(l.num.toDouble()/r.num.toDouble());
}

Js::Number& Js::Number::operator+=(const Js::Number& r){
	num += r.toDouble();
	return *this;
}

Js::Number& Js::Number::operator-=(const Js::Number& r){
	num -= r.toDouble();
	return *this;
}

Js::Number& Js::Number::operator*=(const Js::Number& r){
	num *= r.toDouble();
	return *this;
}

Js::Number& Js::Number::operator/=(const Js::Number& r){
	num /= r.toDouble();
	return *this;
}

//} Operator Overloads

std::string Number::commit() const{
	return num.toString();
}

}
