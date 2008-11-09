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
#ifndef JSSTRING_H
#define JSSTRING_H

#include <jtype.h>
#include <../var.h>
#include <string>

using std::string;

namespace Js {

/**
	@author Neel Basu <neel@zigmoyd>
*/
class String : public Js::JType{
	protected:
		Var mData;
	public:
    String();
		String(const char* data);
		String(const string& data);
    ~String();
	public:
		std::string toStdString() const;
	public:
		friend Js::String operator+(const Js::String& lData, const Js::String& rData);
		Js::String& operator+=(const Js::String& rData);
	public:
		virtual std::string commit() const;
};

}

#endif
