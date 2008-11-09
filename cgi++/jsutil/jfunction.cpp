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
#include "jfunction.h"

namespace Js {

Function::Function() : Js::JType(JTYPE_FUNCTION), fncHideName(false){

}
Function::~Function(){

}


}

/*!
    \fn Js::Function::commit() const
 */
std::string Js::Function::commit() const{
	stringstream o;
	o<<"function"<<((fncName.length() > 0 && !fncHideName) ? " "+fncName+"("+fncArgs+")" : "("+fncArgs+")")<<"{"<<fncBody.str()<<"}";
	return o.str();
}

std::stringstream& Js::Function::operator()(const string& name){
	fncName = name;
	return fncBody;
}
