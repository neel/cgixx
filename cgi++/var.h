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
#ifndef VAR_H
#define VAR_H

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <ostream>
#include <sstream>
#include "httputil.h"

using std::string;
using std::ostream;
using std::stringstream;

/**
	@author Neel Basu <neel@zigmoyd>
*/
class Var{
	private:
		string __data;
	public:
		virtual const char* toStream() const;
		friend ostream& operator<<(ostream&, const Var&);
		friend Var operator+(const Var& l, const int& r);
		friend Var operator+(const Var& l, const unsigned int& r);
		friend Var operator+(const Var& l, const short& r);
		friend Var operator+(const Var& l, const unsigned short& r);
		friend Var operator+(const Var& l, const long& r);
		friend Var operator+(const Var& l, const unsigned long& r);
		friend Var operator+(const Var& l, const float& r);
		friend Var operator+(const Var& l, const double& r);
		friend Var operator+(const Var& l, const char& r);
		friend Var operator+(const Var& l, const char* r);
		friend Var operator+(const Var& l, const string& r);
		friend Var operator-(const Var& l, const int& r);
		friend Var operator-(const Var& l, const unsigned int& r);
		friend Var operator-(const Var& l, const short& r);
		friend Var operator-(const Var& l, const unsigned short& r);
		friend Var operator-(const Var& l, const long& r);
		friend Var operator-(const Var& l, const unsigned long& r);
		friend Var operator-(const Var& l, const float& r);
		friend Var operator-(const Var& l, const double& r);
		friend Var operator*(const Var& l, const int& r);
		friend Var operator*(const Var& l, const unsigned int& r);
		friend Var operator*(const Var& l, const short& r);
		friend Var operator*(const Var& l, const unsigned short& r);
		friend Var operator*(const Var& l, const long& r);
		friend Var operator*(const Var& l, const unsigned long& r);
		friend Var operator*(const Var& l, const float& r);
		friend Var operator*(const Var& l, const double& r);
		friend Var operator/(const Var& l, const int& r);
		friend Var operator/(const Var& l, const unsigned int& r);
		friend Var operator/(const Var& l, const short& r);
		friend Var operator/(const Var& l, const unsigned short& r);
		friend Var operator/(const Var& l, const long& r);
		friend Var operator/(const Var& l, const unsigned long& r);
		friend Var operator/(const Var& l, const float& r);
		friend Var operator/(const Var& l, const double& r);
		friend Var operator+(const int& l, const Var& r);
		friend Var operator+(const unsigned int& l, const Var& r);
		friend Var operator+(const short& l, const Var& r);
		friend Var operator+(const unsigned short& l, const Var& r);
		friend Var operator+(const long& l, const Var& r);
		friend Var operator+(const unsigned long& l, const Var& r);
		friend Var operator+(const float& l, const Var& r);
		friend Var operator+(const double& l, const Var& r);
		friend Var operator+(const char& l, const Var& r);
		friend Var operator+(const char* l, const Var& r);
		friend Var operator+(const string& l, const Var& r);
		friend Var operator-(const int& l, const Var& r);
		friend Var operator-(const unsigned int& l, const Var& r);
		friend Var operator-(const short& l, const Var& r);
		friend Var operator-(const unsigned short& l, const Var& r);
		friend Var operator-(const long& l, const Var& r);
		friend Var operator-(const unsigned long& l, const Var& r);
		friend Var operator-(const float& l, const Var& r);
		friend Var operator-(const double& l, const Var& r);
		friend Var operator*(const int& l, const Var& r);
		friend Var operator*(const unsigned int& l, const Var& r);
		friend Var operator*(const short& l, const Var& r);
		friend Var operator*(const unsigned short& l, const Var& r);
		friend Var operator*(const long& l, const Var& r);
		friend Var operator*(const unsigned long& l, const Var& r);
		friend Var operator*(const float& l, const Var& r);
		friend Var operator*(const double& l, const Var& r);
		friend Var operator/(const int& l, const Var& r);
		friend Var operator/(const unsigned int& l, const Var& r);
		friend Var operator/(const short& l, const Var& r);
		friend Var operator/(const unsigned short& l, const Var& r);
		friend Var operator/(const long& l, const Var& r);
		friend Var operator/(const unsigned long& l, const Var& r);
		friend Var operator/(const float& l, const Var& r);
		friend Var operator/(const double& l, const Var& r);
		const Var& operator+=(const int r);
		const Var& operator+=(const unsigned int r);
		const Var& operator+=(const short r);
		const Var& operator+=(const unsigned short r);
		const Var& operator+=(const long r);
		const Var& operator+=(const unsigned long r);
		const Var& operator+=(const float r);
		const Var& operator+=(const double r);
		const Var& operator+=(const char r);
		const Var& operator+=(const char* r);
		const Var& operator+=(const string& r);
		const Var& operator-=(const int r);
		const Var& operator-=(const unsigned int r);
		const Var& operator-=(const short r);
		const Var& operator-=(const unsigned short r);
		const Var& operator-=(const long r);
		const Var& operator-=(const unsigned long r);
		const Var& operator-=(const float r);
		const Var& operator-=(const double r);
		const Var& operator*=(const int r);
		const Var& operator*=(const unsigned int r);
		const Var& operator*=(const short r);
		const Var& operator*=(const unsigned short r);
		const Var& operator*=(const long r);
		const Var& operator*=(const unsigned long r);
		const Var& operator*=(const float r);
		const Var& operator*=(const double r);
		const Var& operator/=(const int r);
		const Var& operator/=(const unsigned int r);
		const Var& operator/=(const short r);
		const Var& operator/=(const unsigned short r);
		const Var& operator/=(const long r);
		const Var& operator/=(const unsigned long r);
		const Var& operator/=(const float r);
		const Var& operator/=(const double r);
		const Var& operator++();
		const Var& operator--();
		Var();
		virtual ~Var();
		Var(const Var& src);
		Var(const char* val);
		Var(const double val);
		Var(const float val);
		Var(const int val);
		Var(const short val);
		Var(const long val);
		Var(const string& val);
		Var(const char val);
		Var(const unsigned int val);
		Var(const unsigned long val);
		Var(const unsigned short val);

		virtual const char* data() const;
		void setData(const char* data){__data = data;}
		void setData(const Var& val){setData(val.data());}
		virtual size_t size() const;
		virtual const string& toString() const;
		virtual long toLong() const;
		virtual int toInt() const;
		virtual float toFloat() const;
		virtual double toDouble() const;
		virtual char toChar() const;

		operator const string&() const{return (const string&)toString();}
		operator char()	const{return toChar();}
		operator long()	const{return toLong();}
		operator int()	const{return toInt();}
		operator float() const{return toFloat();}
		operator double() const{return toDouble();}
		operator char*() const{return const_cast<char*>(data());}
	public:
		virtual Var* value();///For compatiability reason with Js::JVar
		virtual string commit() const;///For compatiability reason with Js::JVar
};
#endif
