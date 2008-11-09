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
#include "jvar.h"
#include "jnumber.h"
#include "jbool.h"
#include "jfunction.h"
#include "jobject.h"
#include "jstring.h"
#include "jarray.h"

Js::JVar::JVar(): rhs(0x0), isVar(false){

}

Js::JVar::JVar(JVar* r): rhs(r), isVar(false){

}

Js::JVar::JVar(Var& r): rhs(dynamic_cast<Js::JVar*>(new Js::String(r.toString()))), isVar(false){

}

Js::JVar::JVar(Var* r): rhs(dynamic_cast<Js::JVar*>(new Js::String(r->toString()))), isVar(false){

}

Js::JVar::JVar(JVar& r): rhs(&r), isVar(false){

}

Js::JVar::JVar(int r): rhs(dynamic_cast<Js::JVar*>(new Js::Number(r))), isVar(false){

}

Js::JVar::JVar(long r): rhs(dynamic_cast<Js::JVar*>(new Js::Number(r))), isVar(false){

}

Js::JVar::JVar(double r): rhs(dynamic_cast<Js::JVar*>(new Js::Number(r))), isVar(false){

}

Js::JVar::JVar(const string& l): lhs(l), rhs(dynamic_cast<Js::JVar*>(new Js::String(l))), isVar(false){

}

Js::JVar::JVar(const char* l): lhs(l), rhs(dynamic_cast<Js::JVar*>(new Js::String(l))), isVar(false){

}

Js::JVar::~JVar(){

}


/*!
    \fn Js::JVar::commit()
 */
string Js::JVar::commit() const{
	stringstream out;
	out<<"var "<<lhs<<" = "<<rhs->commit();
	return out.str();
}



/*!
    \fn Js::JVar::value() const
 */
const Js::JVar* const Js::JVar::value() const{
	return rhs;
}


/*!
    \fn Js::JVar::value()
 */
Js::JVar* Js::JVar::value(){
	return rhs;
}


/*!
    \fn Js::JVar::value(const JVar* const val)
 */
void Js::JVar::value(Js::JVar* val){
	rhs = dynamic_cast<Js::JVar*>(val->value());
}


/*!
    \fn Js::JVar::varName() const
 */
const string& Js::JVar::varName() const{
	return lhs;
}


/*!
    \fn Js::JVar::varName(const string& varName)
 */
Js::JVar& Js::JVar::varName(const string& varName){
	isVar = true;
	lhs = varName;
	return *(this);
}


const char* Js::JVar::toStream() const{
	return commit().c_str();
}

Js::JVar& Js::JVar::operator=(Js::JVar* r){
	rhs = r;
}

namespace Js{

std::stringstream& operator<<(std::stringstream& o, const Js::JVar& v){
	o<<v.toStream();
	return o;
}

}
