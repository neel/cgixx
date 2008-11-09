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
#include "var.h"

Var::Var():__data(""){}
Var::Var(const Var& src):__data(src.__data){}
Var::Var(const char* val):__data(::toString(val)){}
Var::Var(const double val):__data(::toString(val)){}
Var::Var(const float val):__data(::toString(val)){}
Var::Var(const int val):__data(::toString(val)){}
Var::Var(const long val):__data(::toString(val)){}
Var::Var(const string& val):__data(val){}
Var::Var(const char val):__data(::toString(val)){}
Var::Var(const short val):__data(::toString(val)){}
Var::Var(const unsigned int val):__data(::toString(val)){}
Var::Var(const unsigned long val):__data(::toString(val)){}
Var::Var(const unsigned short val):__data(::toString(val)){}
Var::~Var(){}

size_t Var::size() const{
	return __data.length();
}

const char* Var::data() const{
	return __data.c_str();
}
const string& Var::toString() const{
	return __data;
}
long Var::toLong() const{
	return atol(__data.c_str());
}
int Var::toInt() const{
	return atoi(__data.c_str());
}
float Var::toFloat() const{
	return atof(__data.c_str());
}
double Var::toDouble() const{
	return atof(__data.c_str());
}
char Var::toChar() const{
	if(strlen(__data.c_str()) != 1)return 0x0;
	return __data[0];
}
const Var& Var::operator+=(const int r){setData(Var(toInt()+r));return *this;}
const Var& Var::operator+=(const unsigned int r){setData(Var(toInt()+r));return *this;}
const Var& Var::operator+=(const short r){setData(Var(toInt()+r));return *this;}
const Var& Var::operator+=(const unsigned short r){setData(Var(toInt()+r));return *this;}
const Var& Var::operator+=(const long r){setData(Var(toInt()+r));return *this;}
const Var& Var::operator+=(const unsigned long r){setData(Var(toInt()+r));return *this;}
const Var& Var::operator+=(const float r){setData(Var(toFloat()+r));return *this;}
const Var& Var::operator+=(const double r){setData(Var(toDouble()+r));return *this;}
const Var& Var::operator+=(const char r){setData(Var(toString()+r));return *this;}
const Var& Var::operator+=(const char* r){setData(Var(toString()+r));return *this;}
const Var& Var::operator+=(const string& r){setData(Var(toString()+r));return *this;}
const Var& Var::operator-=(const int r){setData(Var(toInt()-r));return *this;}
const Var& Var::operator-=(const unsigned int r){setData(Var(toInt()-r));return *this;}
const Var& Var::operator-=(const short r){setData(Var(toInt()-r));return *this;}
const Var& Var::operator-=(const unsigned short r){setData(Var(toInt()-r));return *this;}
const Var& Var::operator-=(const long r){setData(Var(toInt()-r));return *this;}
const Var& Var::operator-=(const unsigned long r){setData(Var(toInt()-r));return *this;}
const Var& Var::operator-=(const float r){setData(Var(toFloat()-r));return *this;}
const Var& Var::operator-=(const double r){setData(Var(toDouble()-r));return *this;}
const Var& Var::operator*=(const int r){setData(Var(toInt()*r));return *this;}
const Var& Var::operator*=(const unsigned int r){setData(Var(toInt()*r));return *this;}
const Var& Var::operator*=(const short r){setData(Var(toInt()*r));return *this;}
const Var& Var::operator*=(const unsigned short r){setData(Var(toInt()*r));return *this;}
const Var& Var::operator*=(const long r){setData(Var(toInt()*r));return *this;}
const Var& Var::operator*=(const unsigned long r){setData(Var(toInt()*r));return *this;}
const Var& Var::operator*=(const float r){setData(Var(toFloat()*r));return *this;}
const Var& Var::operator*=(const double r){setData(Var(toDouble()*r));return *this;}
const Var& Var::operator/=(const int r){setData(Var(toInt()/r));return *this;}
const Var& Var::operator/=(const unsigned int r){setData(Var(toInt()/r));return *this;}
const Var& Var::operator/=(const short r){setData(Var(toInt()/r));return *this;}
const Var& Var::operator/=(const unsigned short r){setData(Var(toInt()/r));return *this;}
const Var& Var::operator/=(const long r){setData(Var(toInt()/r));return *this;}
const Var& Var::operator/=(const unsigned long r){setData(Var(toInt()/r));return *this;}
const Var& Var::operator/=(const float r){setData(Var(toFloat()/r));return *this;}
const Var& Var::operator/=(const double r){setData(Var(toDouble()/r));return *this;}
const Var& Var::operator++(){setData(Var(toInt()+1));return *this;}
const Var& Var::operator--(){setData(Var(toInt()-1));return *this;}
Var operator+(const Var& l, const int& r){return (l.toInt()+r);}
Var operator+(const Var& l, const unsigned int& r){return (l.toInt()+r);}
Var operator+(const Var& l, const short& r){return (l.toInt()+r);}
Var operator+(const Var& l, const unsigned short& r){return (l.toInt()+r);}
Var operator+(const Var& l, const long& r){return (l.toInt()+r);}
Var operator+(const Var& l, const unsigned long& r){return (l.toInt()+r);}
Var operator+(const Var& l, const float& r){return (l.toFloat()+r);}
Var operator+(const Var& l, const double& r){return (l.toDouble()+r);}
Var operator+(const Var& l, const char& r){return (l.toString()+r);}
Var operator+(const Var& l, const char* r){return (l.toString()+r);}
Var operator+(const Var& l, const string& r){return (l.toString()+r);}
Var operator-(const Var& l, const int& r){return (l.toInt()-r);}
Var operator-(const Var& l, const unsigned int& r){return (l.toInt()-r);}
Var operator-(const Var& l, const short& r){return (l.toInt()-r);}
Var operator-(const Var& l, const unsigned short& r){return (l.toInt()-r);}
Var operator-(const Var& l, const long& r){return (l.toInt()-r);}
Var operator-(const Var& l, const unsigned long& r){return (l.toInt()-r);}
Var operator-(const Var& l, const float& r){return (l.toFloat()-r);}
Var operator-(const Var& l, const double& r){return (l.toDouble()+r);}
Var operator*(const Var& l, const int& r){return (l.toInt()*r);}
Var operator*(const Var& l, const unsigned int& r){return (l.toInt()*r);}
Var operator*(const Var& l, const short& r){return (l.toInt()*r);}
Var operator*(const Var& l, const unsigned short& r){return (l.toInt()*r);}
Var operator*(const Var& l, const long& r){return (l.toInt()*r);}
Var operator*(const Var& l, const unsigned long& r){return (l.toInt()*r);}
Var operator*(const Var& l, const float& r){return (l.toFloat()*r);}
Var operator*(const Var& l, const double& r){return (l.toDouble()*r);}
Var operator/(const Var& l, const int& r){return (l.toInt()/r);}
Var operator/(const Var& l, const unsigned int& r){return (l.toInt()/r);}
Var operator/(const Var& l, const short& r){return (l.toInt()/r);}
Var operator/(const Var& l, const unsigned short& r){return (l.toInt()/r);}
Var operator/(const Var& l, const long& r){return (l.toInt()/r);}
Var operator/(const Var& l, const unsigned long& r){return (l.toInt()/r);}
Var operator/(const Var& l, const float& r){return (l.toFloat()/r);}
Var operator/(const Var& l, const double& r){return (l.toDouble()/r);}
Var operator+(const int& l, const Var& r){return (r.toInt()+l);}
Var operator+(const unsigned int& l, const Var& r){return (r.toInt()+l);}
Var operator+(const short& l, const Var& r){return (r.toInt()+l);}
Var operator+(const unsigned short& l, const Var& r){return (r.toInt()+l);}
Var operator+(const long& l, const Var& r){return (r.toInt()+l);}
Var operator+(const unsigned long& l, const Var& r){return (r.toInt()+l);}
Var operator+(const float& l, const Var& r){return (r.toFloat()+l);}
Var operator+(const double& l, const Var& r){return (r.toDouble()+l);}
Var operator+(const char& l, const Var& r){string tmp = r.toString();return tmp.insert(0, 1, l);}
Var operator+(const char* l, const Var& r){string tmp = r.toString();return tmp.insert(0, l);}
Var operator+(const string& l, const Var& r){string tmp = r.toString();return tmp.insert(0, l);}
Var operator-(const int& l, const Var& r){return (r.toInt()-l);}
Var operator-(const unsigned int& l, const Var& r){return (r.toInt()-l);}
Var operator-(const short& l, const Var& r){return (r.toInt()-l);}
Var operator-(const unsigned short& l, const Var& r){return (r.toInt()-l);}
Var operator-(const long& l, const Var& r){return (r.toInt()-l);}
Var operator-(const unsigned long& l, const Var& r){return (r.toInt()-l);}
Var operator-(const float& l, const Var& r){return (r.toFloat()-l);}
Var operator-(const double& l, const Var& r){return (r.toDouble()+l);}
Var operator*(const int& l, const Var& r){return (r.toInt()*l);}
Var operator*(const unsigned int& l, const Var& r){return (r.toInt()*l);}
Var operator*(const short& l, const Var& r){return (r.toInt()*l);}
Var operator*(const unsigned short& l, const Var& r){return (r.toInt()*l);}
Var operator*(const long& l, const Var& r){return (r.toInt()*l);}
Var operator*(const unsigned long& l, const Var& r){return (r.toInt()*l);}
Var operator*(const float& l, const Var& r){return (r.toFloat()*l);}
Var operator*(const double& l, const Var& r){return (r.toDouble()*l);}
Var operator/(const int& l, const Var& r){return (r.toInt()/l);}
Var operator/(const unsigned int& l, const Var& r){return (r.toInt()/l);}
Var operator/(const short& l, const Var& r){return (r.toInt()/l);}
Var operator/(const unsigned short& l, const Var& r){return (r.toInt()/l);}
Var operator/(const long& l, const Var& r){return (r.toInt()/l);}
Var operator/(const unsigned long& l, const Var& r){return (r.toInt()/l);}
Var operator/(const float& l, const Var& r){return (r.toFloat()/l);}
Var operator/(const double& l, const Var& r){return (r.toDouble()/l);}

const char* Var::toStream() const{
	return __data.c_str();
}
ostream& operator<<(ostream& o, const Var& v){
	o<<v.toStream();
	return o;
}

string Var::commit() const{
	return toString();
}

Var* Var::value(){
	return this;
}
