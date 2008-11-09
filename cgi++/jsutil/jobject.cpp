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
#include "jobject.h"

namespace Js {

Object::Object(): Js::JType(JTYPE_OBJECT){

}


Object::~Object(){

}
}

Js::Object::JElemAdapter Js::Object::operator()(const string& key){
	ElemMap::iterator it=list.find(key);
	if(it != list.end()){
		return JElemAdapter(it);
	}else{
		Js::JType* x = new Js::JType;
		return JElemAdapter(list.insert(make_pair(key, x)).first);
	}
}

std::string Js::Object::commit() const{
	std::stringstream o;
	o<<"{";
	ElemMap::const_iterator it = list.begin();
	ElemMap::const_iterator start = list.begin();
	while(it != list.end()){
		o<<((it != start) ? "," : "")<<it->first<<":"<<it->second->commit();
		it++;
	}
	o<<"}";
	return o.str();
}


/*!
    \fn Js::Object::elemExists(const std::string& key) const
 */
bool Js::Object::elemExists(const std::string& key) const{
    /// @todo implement me
}


/*!
    \fn Js::Object::addElem(const std::string& key, Js::JType* jObj)
 */
void Js::Object::addElem(const std::string& key, Js::JType* jObj){
	list.insert(make_pair(key, jObj));
}


/*!
    \fn Js::Object::getElem(const std::string&) const
 */
const Js::JType* Js::Object::getElem(const std::string&) const{
    /// @todo implement me
}
