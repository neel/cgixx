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
#include "myapp.h"

MyApp::MyApp() : CGIApp(){

}


MyApp::~MyApp(){

}


/*!
    \fn MyApp::subMain()
 */
void MyApp::subMain(){
	res<<"Hello "<<b()<<"Mars"<<b()<<endl;
	Js::Number x, y, z;
	x = 2;
	x = 5;
	y = 4 + x + -46.5;
	y += 2;
	z = x+y;
	res<<x<<y<<endl;
	Js::String m;
	m = "World";
	m = "Hello " + m + " I am Neel Basu!";
	res<<m<<endl;
	Js::Function f;
	f("fnc")<<"alert('Hello World')";
	res<<f<<endl;
	Js::Object o;
	o("Hello")  = 196;
	o("planet") = Js::String("World");
	o("math") = new Js::String("196 Algorithm");
	res<<endl<<endl<<o("math")->commit()<<endl<<endl;
	res<<o<<endl;
	Js::Array arr;
	arr << 555;
	arr << x;
	arr << y;
	arr << m;
	arr << f;
	arr << o;
	arr << z;
	arr[0] = new Js::Number(25);
	res<<arr<<endl;
}


