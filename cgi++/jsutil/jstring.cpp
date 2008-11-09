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
#include "jstring.h"

namespace Js {

String::String() : Js::JType(JTYPE_STRING){

}

String::String(const char* data) : Js::JType(JTYPE_STRING), mData(data){

}

String::String(const string& data) : Js::JType(JTYPE_STRING), mData(data){

}

String::~String(){

}

std::string String::toStdString() const{
	return mData.toString();
}

Js::String operator+(const Js::String& lData, const Js::String& rData){
	return Js::String(lData.toStdString()+rData.toStdString());
}

Js::String& String::operator+=(const Js::String& rData){
	mData += rData.toStdString();
	return *this;
}

std::string Js::String::commit() const{
	return "\""+toStdString()+"\"";
}

}
