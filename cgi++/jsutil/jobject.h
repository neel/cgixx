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
#ifndef JSOBJECT_H
#define JSOBJECT_H

#include <string>
#include <jtype.h>
#include <jnumber.h>
#include <jstring.h>
#include <jbool.h>
#include <jfunction.h>
#include <jarray.h>
#include <jobject.h>
#include <map>
#include <httputil.h>

using std::string;

namespace Js{

/**
	@author Neel Basu <neel@zigmoyd>
*/
class Object: public Js::JType{
	private:
		typedef std::map<string, Js::JType*> ElemMap;
		class JElemAdapter{
			public:
				friend class Js::Object;
			private:
				Js::JType* & elem;
			private:
				explicit JElemAdapter(ElemMap::iterator it): elem(it->second){}
				explicit JElemAdapter(Js::JType* r): elem(r){}
			public:
				JElemAdapter(const Js::Object::JElemAdapter& r):elem(r.elem){}
			public:
				bool exists() const{return (elem != 0x0);}
				void clear(){elem = 0x0;}
				void remove(){delete elem; clear();}
				Js::JType* & get() const throw(){return elem;}
				Js::JType* & operator->() const throw(){return get();}
				Js::JType* & operator*() const throw(){return get();}
				Js::Object::JElemAdapter& operator=(Js::JType* r){elem = r;return *this;}
				Js::Object::JElemAdapter& operator=(unsigned int r){elem = new Js::Number(r);return *this;}
				Js::Object::JElemAdapter& operator=(unsigned long r){elem = new Js::Number(r);return *this;}
				Js::Object::JElemAdapter& operator=(unsigned short r){elem = new Js::Number(r);return *this;}
				Js::Object::JElemAdapter& operator=(int r){elem = new Js::Number(r);return *this;}
				Js::Object::JElemAdapter& operator=(short r){elem = new Js::Number(r);return *this;}
				Js::Object::JElemAdapter& operator=(long r){elem = new Js::Number(r);return *this;}
				Js::Object::JElemAdapter& operator=(float r){elem = new Js::Number(r);return *this;}
				Js::Object::JElemAdapter& operator=(double r){elem = new Js::Number(r);return *this;}
				Js::Object::JElemAdapter& operator=(bool r){elem = new Js::Bool(r);return *this;}
				Js::Object::JElemAdapter& operator=(char r){elem = new Js::String(toString(r));return *this;}
				Js::Object::JElemAdapter& operator=(const std::string& r){elem = new Js::String(r);return *this;}
				Js::Object::JElemAdapter& operator=(const Js::Number& r){elem = new Js::Number(r);return *this;}
				Js::Object::JElemAdapter& operator=(const Js::String& r){elem = new Js::String(r);return *this;}
				Js::Object::JElemAdapter& operator=(const Js::Bool& r){elem = new Js::Bool(r);return *this;}
				Js::Object::JElemAdapter& operator=(const Js::Function& r){elem = new Js::Function(r);return *this;}
				Js::Object::JElemAdapter& operator=(const Js::Array& r){elem = new Js::Array(r);return *this;}
				Js::Object::JElemAdapter& operator=(const Js::Object& r){elem = new Js::Object(r);return *this;}
		};
	private:
		ElemMap list;
	public:
    explicit Object();
    virtual ~Object();
	public:
		Js::Object::JElemAdapter operator()(const string& key);
	public:
    bool elemExists(const std::string& key) const;
    void addElem(const std::string& key, Js::JType* jObj);
    const Js::JType* getElem(const std::string&) const;
	public:
		virtual std::string commit() const;
};

}

#endif
