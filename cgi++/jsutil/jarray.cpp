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
#include "jarray.h"
#include <jnumber.h>
#include <jstring.h>
#include <jbool.h>

namespace Js {

Array::Array() : Js::JType(JTYPE_ARRAY), maxLen(0){

}
Array::Array(size_t len) : Js::JType(JTYPE_ARRAY), maxLen(len){

}
Array::~Array(){
	removeAll();
}


}


/*!
    \fn Js::Array::at(int i)
 */
Js::JType& Js::Array::at(size_t i) throw(std::out_of_range){
	if(i >= list.size()){
		throw std::out_of_range(std::string("Js::Array::at(")+Var(i).toString()+std::string(") index ")+Var(i).toString()+std::string(" out of range"));
	}else{
		return *(list.at(i));
	}
}


/*!
    \fn Js::Array::at(int i)
 */
Js::JType& Js::Array::at(size_t i, Js::JType* r) throw(std::out_of_range){
	if(i >= list.size()){
		throw std::out_of_range(std::string("Js::Array::at(")+Var(i).toString()+std::string(") index ")+Var(i).toString()+std::string(" out of range"));
	}else{
		return *(list.operator[](i) = r);
	}
}


/*!
    \fn Js::Array::at(int i) const
 */
const Js::JType& Js::Array::at(size_t i) const throw(std::out_of_range){
	if(i >= list.size()){
		throw std::out_of_range(std::string("Js::Array::at(")+Var(i).toString()+std::string(") index ")+Var(i).toString()+std::string(" out of range"));
	}else{
		return *(list.at(i));
	}
}


/*!
    \fn Js::Array::insert(JType* jObj)
 */
size_t Js::Array::insert(Js::JType* jObj) throw(std::out_of_range, std::bad_alloc){
	if(maxLen != 0 && list.size() >= maxLen){
		throw std::out_of_range("Js::Array::insert() max length "+Var(maxLen)+" exceeds");
	}
	try{
		list.push_back(jObj);
	}catch(...){
		throw;
	}
	return (list.size()-1);
}


/*!
    \fn Js::Array::insert(JType& jObj)
 */
size_t Js::Array::insert(Js::JType& jObj) throw(std::out_of_range, std::bad_alloc){
	if(maxLen != 0 && list.size() >= maxLen){
		throw std::out_of_range("Js::Array::insert() max length "+Var(maxLen)+" exceeds");
	}
	try{
		list.push_back(&jObj);
	}catch(...){
		throw;
	}
	return (list.size()-1);
}


/*!
    \fn Js::Array::length() const
 */
size_t Js::Array::length() const{
	return list.size();
}


/*!
    \fn Js::Array::removeAll()
 */
void Js::Array::removeAll(){
	list.clear();
}


/*!
    \fn Js::Array::remove()
 */
void Js::Array::remove(size_t i) throw(std::out_of_range){
	if(i >= list.size()){
		throw std::out_of_range(std::string("Js::Array::remove(")+Var(i).toString()+std::string(") index ")+Var(i).toString()+std::string(" out of range"));
	}else{
		list.erase(list.begin()+i);
	}
}

void Js::Array::remove(size_t i, size_t j) throw(std::out_of_range){
	if(i >= list.size()){
		throw std::out_of_range(std::string("Js::Array::remove(")+Var(i).toString()+std::string(") index ")+Var(i).toString()+std::string(" out of range"));
	}else if(j >= list.size()){
		throw std::out_of_range(std::string("Js::Array::remove(")+Var(j).toString()+std::string(") index ")+Var(j).toString()+std::string(" out of range"));
	}else{
		list.erase(list.begin()+i, list.begin()+j);
	}
}


/*!
    \fn Js::Array::each() const
 */
const Js::JType* Js::Array::each(size_t i) const{
	static JVect::const_iterator it = list.begin() + i;
	JVect::const_iterator retIt = it;
	if(it != list.end()){
		it++;
	}
	return *(retIt.operator->());
}


/*!
    \fn Js::Array::each()
 */
Js::JType* Js::Array::each(size_t i){
	static JVect::iterator it = list.begin() + i;
	JVect::iterator retIt = it;
	if(it != list.end()){
		it++;
	}
	return *(retIt.operator->());
}

const Js::JType* Js::Array::operator[](size_t n) const throw(std::out_of_range){
	try{
		return &at(n);
	}catch(...){
		throw;
	}
}
Js::JType* &Js::Array::operator[](size_t n) throw(std::out_of_range){
	try{
		return (Js::JType* &)list.operator[](n);
	}catch(...){
		throw;
	}
}
Js::Array& Js::Array::operator<<(Js::JType* jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(jObj);
	}catch(...){
		throw;
	}
	return *this;
}
Js::Array& Js::Array::operator<<(Js::JType& jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(jObj);
	}catch(...){
		throw;
	}
	return *this;
}

Js::Array& Js::Array::operator<<(unsigned int jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(new Js::Number(jObj));
	}catch(...){
		throw;
	}
	return *this;
};
Js::Array& Js::Array::operator<<(unsigned long jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(new Js::Number(jObj));
	}catch(...){
		throw;
	}
	return *this;
};
Js::Array& Js::Array::operator<<(unsigned short jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(new Js::Number(jObj));
	}catch(...){
		throw;
	}
	return *this;
};
Js::Array& Js::Array::operator<<(double jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(new Js::Number(jObj));
	}catch(...){
		throw;
	}
	return *this;
};
Js::Array& Js::Array::operator<<(float jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(new Js::Number(jObj));
	}catch(...){
		throw;
	}
	return *this;
};
Js::Array& Js::Array::operator<<(int jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(new Js::Number(jObj));
	}catch(...){
		throw;
	}
	return *this;
};
Js::Array& Js::Array::operator<<(short jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(new Js::Number(jObj));
	}catch(...){
		throw;
	}
	return *this;
};
Js::Array& Js::Array::operator<<(long jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(new Js::Number(jObj));
	}catch(...){
		throw;
	}
	return *this;
};
Js::Array& Js::Array::operator<<(bool jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(new Js::Bool(jObj));
	}catch(...){
		throw;
	}
	return *this;
};
Js::Array& Js::Array::operator<<(const string& jObj) throw(std::out_of_range, std::bad_alloc){
	try{
		insert(new Js::String(jObj));
	}catch(...){
		throw;
	}
	return *this;
};

std::string Js::Array::commit() const{
	stringstream o;
	o<<"[";
	for(size_t i=0;i<length();i++){
		const JType* elem = &at(i);
		if(elem->isFunction()){
			dynamic_cast<const Js::Function*>(elem)->hideName();
		}
		o<<elem->commit();
		if(i != (length()-1)){
			o<<", ";
		}
	}
	o<<"]";
	return o.str();
}
