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
#include "jdataadapter.h"

namespace Js{
Js::JDataAdapter::JDataAdapter(Js::JType* e): elem(e){

}


Js::JDataAdapter::~JDataAdapter(){
	delete elem;
}

}

bool Js::JDataAdapter::operationPermited(Js::JType::JDataType typeName, const Var& opCode){

}


/*!
    \fn Js::JDataAdapter::operator=(Js::JType* r)
 */
Js::JDataAdapter& Js::JDataAdapter::operator=(Js::JType* r){
	elem = r;
}


/*!
    \fn Js::JDataAdapter::operator=(const Js::JType& r)
 */
Js::JDataAdapter& Js::JDataAdapter::operator=(const Js::JType& r){
	elem = &r;
}


/*!
    \fn Js::JDataAdapter::operator+=(const Js::JType& r)
 */
Js::JDataAdapter& Js::JDataAdapter::operator+=(const Js::JType& r){
    /// @todo implement me
}

/*!
    \fn Js::JDataAdapter::operator+=(Js::JType* r)
 */
Js::JDataAdapter& Js::JDataAdapter::operator+=(Js::JType* r){
    /// @todo implement me
}

/*!
    \fn Js::JDataAdapter::operator-=(const Js::JType& r)
 */
Js::JDataAdapter& Js::JDataAdapter::operator-=(const Js::JType& r){
    /// @todo implement me
}

/*!
    \fn Js::JDataAdapter::operator-=(Js::JType* r)
 */
Js::JDataAdapter& Js::JDataAdapter::operator-=(Js::JType* r){
    /// @todo implement me
}

/*!
    \fn Js::JDataAdapter::operator*=(const Js::JType& r)
 */
Js::JDataAdapter& Js::JDataAdapter::operator*=(const Js::JType& r){
    /// @todo implement me
}

/*!
    \fn Js::JDataAdapter::operator*=(Js::JType* r)
 */
Js::JDataAdapter& Js::JDataAdapter::operator*=(Js::JType* r){
    /// @todo implement me
}

/*!
    \fn Js::JDataAdapter::operator/=(const Js::JType& r)
 */
Js::JDataAdapter& Js::JDataAdapter::operator/=(const Js::JType& r){
    /// @todo implement me
}

/*!
    \fn Js::JDataAdapter::operator/=(Js::JType* r)
 */
Js::JDataAdapter& Js::JDataAdapter::operator/=(Js::JType* r){
    /// @todo implement me
}

/*!
    \fn Js::JDataAdapter::operator++()
 */
Js::JDataAdapter& Js::JDataAdapter::operator++(){
    /// @todo implement me
}


/*!
    \fn Js::JDataAdapter::operator++(int)
 */
Js::JDataAdapter& Js::JDataAdapter::operator++(int){
    /// @todo implement me
}


/*!
    \fn Js::JDataAdapter::operator--()
 */
Js::JDataAdapter& Js::JDataAdapter::operator--(){
    /// @todo implement me
}


/*!
    \fn Js::JDataAdapter::operator--(int)
 */
Js::JDataAdapter& Js::JDataAdapter::operator--(int){
    /// @todo implement me
}

bool Js::JDataAdapter::operator<(const Js::JType& r){

}
bool Js::JDataAdapter::operator>(Js::JType* r){

}
bool Js::JDataAdapter::operator<=(const Js::JType& r){

}
bool Js::JDataAdapter::operator>=(Js::JType* r){

}


/*!
    \fn Js::JDataAdapter::operator->() const throw()
 */
Js::JType* Js::JDataAdapter::operator->() const throw(){
	return elem;
}


/*!
    \fn Js::JDataAdapter::operator*() const throw()
 */
Js::JType& Js::JDataAdapter::operator*() const throw(){
	return *elem;
}




Js::JDataAdapter Js::operator+(const Js::JType& l, const Js::JDataAdapter& r){

}
Js::JDataAdapter Js::operator*(const Js::JType& l, const Js::JDataAdapter& r){

}
Js::JDataAdapter Js::operator/(const Js::JType& l, const Js::JDataAdapter& r){

}
Js::JDataAdapter Js::operator-(const Js::JType& l, const Js::JDataAdapter& r){

}
Js::JDataAdapter Js::operator+(const Js::JDataAdapter& l, const Js::JType& r){

}
Js::JDataAdapter Js::operator*(const Js::JDataAdapter& l, const Js::JType& r){

}
Js::JDataAdapter Js::operator/(const Js::JDataAdapter& l, const Js::JType& r){

}
Js::JDataAdapter Js::operator-(const Js::JDataAdapter& l, const Js::JType& r){

}

/*!
    \fn Js::JDataAdapter::toJArray() const
 */
Js::Array Js::JDataAdapter::toJArray() const{
	return *(dynamic_cast<Js::Array*>(elem));
}


/*!
    \fn Js::JDataAdapter::toJBool() const
 */
Js::Bool Js::JDataAdapter::toJBool() const{
	return *(dynamic_cast<Js::Bool*>(elem));
}


/*!
    \fn Js::JDataAdapter::toJFunction() const
 */
Js::Function Js::JDataAdapter::toJFunction() const{
	return *(dynamic_cast<Js::Function*>(elem));
}


/*!
    \fn Js::JDataAdapter::toJObj() const
 */
Js::JType* Js::JDataAdapter::toJObj() const{
	return elem;
}


/*!
    \fn Js::JDataAdapter::toJNumber() const
 */
Js::Number Js::JDataAdapter::toJNumber() const{
	return *(dynamic_cast<Js::Number*>(elem));
}


/*!
    \fn Js::JDataAdapter::toJObject() const
 */
Js::Object Js::JDataAdapter::toJObject() const{
	return *(dynamic_cast<Js::Object*>(elem));
}


/*!
    \fn Js::JDataAdapter::toJString() const
 */
Js::String Js::JDataAdapter::toJString() const{
	return *(dynamic_cast<Js::String*>(elem));
}





