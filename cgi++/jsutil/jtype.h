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
#ifndef JSJTYPE_H
#define JSJTYPE_H

#include <string>
#include <sstream>
#include <../httputil.h>

namespace Js {

/**
	@author Neel Basu <neel.basu.z@gmail.com>
*/
class JType{
	public:
		enum JDataType{
			JTYPE_UNDEFINED,
			JTYPE_NUMBER,
			JTYPE_STRING,
			JTYPE_BOOL,
			JTYPE_ARRAY,
			JTYPE_FUNCTION,
			JTYPE_OBJECT
		};
	private:
		JDataType mTypeName;
	public:
    JType(JDataType typeName=JTYPE_UNDEFINED);
    virtual ~JType();
	public:
		JDataType type() const{return mTypeName;}
		bool isUndefined() const{return (mTypeName == JTYPE_UNDEFINED);}
		bool isNumber() const{return (mTypeName == JTYPE_NUMBER);}
		bool isString() const{return (mTypeName == JTYPE_STRING);}
		bool isBoolean() const{return (mTypeName == JTYPE_BOOL);}
		bool isFunction() const{return (mTypeName == JTYPE_FUNCTION);}
		bool isArray() const{return (mTypeName == JTYPE_ARRAY);}
		bool isObject() const{return (mTypeName == JTYPE_OBJECT);}
	public:
    virtual std::string commit() const{
			return "null";
		};
		friend std::stringstream& operator<<(std::stringstream& o, const Js::JType& v);
};

}

#endif
