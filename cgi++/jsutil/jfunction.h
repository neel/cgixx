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
#ifndef JSFUNCTION_H
#define JSFUNCTION_H

#include <jtype.h>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

namespace Js {

/**
	@author Neel Basu <neel@zigmoyd>
*/
class Function : public Js::JType{
	private:
		string				fncName;
		string				fncArgs;
		stringstream	fncBody;
		mutable bool	fncHideName;
	public:
    Function();
		Function(const Js::Function& f):fncName(f.fncName), fncArgs(f.fncArgs), fncBody(f.fncBody.str()), fncHideName(fncHideName){};
    ~Function();
		void hideName(bool status = true) const{
			fncHideName = status;
		}
		Js::Function& name(const string& name){
			fncName = name;
			return *this;
		}
		Js::Function& args(const string& args){
			fncArgs = args;
			return *this;
		}
    stringstream& body(){
			return fncBody;
    }
	public:
		std::stringstream& operator()(const string& name="");
	public:
    virtual std::string commit() const;
	public:
};

}

#endif
