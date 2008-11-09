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
#ifndef JSARRAY_H
#define JSARRAY_H

#include <jtype.h>
#include <vector>
#include <stdexcept>
#include <../var.h>
#include <jfunction.h>

using std::vector;

namespace Js {

/**
	@author Neel Basu <neel@zigmoyd>
*/
class Array : public Js::JType{
	private:
		typedef vector<Js::JType*> JVect;
	private:
		JVect list;
		size_t maxLen;
	public:
    Array();
		explicit Array(size_t len);
    virtual ~Array();
	public:
    JType& at(size_t i) throw(std::out_of_range);
		JType& at(size_t i, Js::JType* r) throw(std::out_of_range);
    const JType& at(size_t i) const throw(std::out_of_range);
    size_t insert(Js::JType* jObj) throw(std::out_of_range, std::bad_alloc);
    size_t insert(Js::JType& jObj) throw(std::out_of_range, std::bad_alloc);
    size_t length() const;
		void remove(size_t i) throw(std::out_of_range);
		void remove(size_t i, size_t j) throw(std::out_of_range);
    void removeAll();
    Js::JType* each(size_t i=0);
		const Js::JType* each(size_t i=0) const;
	public:
		const Js::JType* operator[](size_t n) const throw(std::out_of_range);
		Js::JType* &operator[](size_t n) throw(std::out_of_range);
		Js::Array& operator<<(Js::JType* jObj) throw(std::out_of_range, std::bad_alloc);
		Js::Array& operator<<(Js::JType& jObj) throw(std::out_of_range, std::bad_alloc);
		Js::Array& operator<<(unsigned int jObj) throw(std::out_of_range, std::bad_alloc);
		Js::Array& operator<<(unsigned long jObj) throw(std::out_of_range, std::bad_alloc);
		Js::Array& operator<<(unsigned short jObj) throw(std::out_of_range, std::bad_alloc);
		Js::Array& operator<<(double jObj) throw(std::out_of_range, std::bad_alloc);
		Js::Array& operator<<(float jObj) throw(std::out_of_range, std::bad_alloc);
		Js::Array& operator<<(int jObj) throw(std::out_of_range, std::bad_alloc);
		Js::Array& operator<<(short jObj) throw(std::out_of_range, std::bad_alloc);
		Js::Array& operator<<(long jObj) throw(std::out_of_range, std::bad_alloc);
		Js::Array& operator<<(bool jObj) throw(std::out_of_range, std::bad_alloc);
		Js::Array& operator<<(const string& jObj) throw(std::out_of_range, std::bad_alloc);
	public:
		virtual std::string commit() const;
};

}

#endif
