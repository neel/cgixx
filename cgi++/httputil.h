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

//some of the codes (Url Encoding and Decoding) are borrowed from http://www.koders.com/cpp/fidB2A537A71CAA62B45600A401E58354F15272EBBC.aspx?s=mdef%3Amd5

#ifndef URLENCODE_H
#define URLENCODE_H

#include <map>
#include <string>
#include <vector>
#include <sstream>
#include "stringlist.h"

#ifdef __cplusplus
extern "C"{
#endif
        #include <string.h>
        #include <stdlib.h>
#ifdef __cplusplus
}
#endif

using std::vector;
using std::map;
using std::string;
using std::stringstream;

static int HexPairValue(const char*);
int UrlDecode(const char*, char*);
int UrlEncode(const char*, char*, unsigned);
std::string UrlDecodeString(const std::string&);
std::string UrlEncodeString(const std::string&);

StringList split(string, char);

std::string trimLeft(std::string, char c='\0');
std::string trimRight(std::string, char c='\0');
std::string trim(std::string, char c='\0');

string toString(const long i);
string toString(const int i);
string toString(const short i);
string toString(const float i);
string toString(const double i);
string toString(const unsigned long i);
string toString(const unsigned int i);
string toString(const unsigned short i);
string toString(const char i);
string toString(const char* i);
const string& toString(const string& str);

string htmlSpecialChars(string srcStr);
#endif
