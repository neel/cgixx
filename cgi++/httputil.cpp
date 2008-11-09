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

//some of the codes are borrowed from http://www.koders.com/cpp/fidB2A537A71CAA62B45600A401E58354F15272EBBC.aspx?s=mdef%3Amd5
#include "httputil.h"

static int HexPairValue(const char * code){
  int value = 0;
  const char * pch = code;
  for (;;) {
    int digit = *pch++;
    if (digit >= '0' && digit <= '9') {
      value += digit - '0';
    }
    else if (digit >= 'A' && digit <= 'F') {
      value += digit - 'A' + 10;
    }
    else if (digit >= 'a' && digit <= 'f') {
      value += digit - 'a' + 10;
    }
    else {
      return -1;
    }
    if (pch == code + 2)
      return value;
    value <<= 4;
  }
}
int UrlDecode(const char *source, char *dest){
  char * start = dest;

  while (*source) {
    switch (*source) {
    case '+':
      *(dest++) = ' ';
      break;
    case '%':
      if (source[1] && source[2]) {
        int value = HexPairValue(source + 1);
        if (value >= 0) {
          *(dest++) = value;
          source += 2;
        }
        else {
          *dest++ = '?';
        }
      }
      else {
        *dest++ = '?';
      }
      break;
    default:
      *dest++ = *source;
    }
    source++;
  }

  *dest = 0;
  return dest - start;
}
int UrlEncode(const char *source, char *dest, unsigned max){
  static const char *digits = "0123456789ABCDEF";
  unsigned char ch;
  unsigned len = 0;
  char *start = dest;

  while (len < max - 4 && *source)
  {
    ch = (unsigned char)*source;
    if (*source == ' ') {
      *dest++ = '+';
    }
    else if (isalnum(ch) || strchr("-_.!~*'()", ch)) {
      *dest++ = *source;
    }
    else {
      *dest++ = '%';
      *dest++ = digits[(ch >> 4) & 0x0F];
      *dest++ = digits[       ch & 0x0F];
    }
    source++;
  }
  *dest = 0;
  return start - dest;
}
std::string UrlDecodeString(const std::string & encoded){
  const char * sz_encoded = encoded.c_str();
  size_t needed_length = encoded.length();
  for (const char * pch = sz_encoded; *pch; pch++) {
    if (*pch == '%')
      needed_length += 2;
  }
  needed_length += 10;
  char stackalloc[64];
  char * buf = needed_length > sizeof(stackalloc)/sizeof(*stackalloc) ?
    (char *)malloc(needed_length) : stackalloc;
  UrlDecode(encoded.c_str(), buf);
  std::string result(buf);
  if (buf != stackalloc) {
    free(buf);
  }
  return result;
}
std::string UrlEncodeString(const std::string & decoded){
  const char * sz_decoded = decoded.c_str();
  size_t needed_length = decoded.length() * 3 + 3;
  char stackalloc[64];
  char * buf = needed_length > sizeof(stackalloc)/sizeof(*stackalloc) ?
    (char *)malloc(needed_length) : stackalloc;
  UrlEncode(decoded.c_str(), buf, needed_length);
  std::string result(buf);
  if (buf != stackalloc) {
    free(buf);
  }
  return result;
}

StringList split(string srcStr, char brkPt){
	StringList strVect;
	string tmpBuff="";
	for(unsigned int i=0;i<srcStr.length();i++){
		char currentChar = static_cast<char>(srcStr.at(i));
		if(currentChar != brkPt && i != srcStr.length()-1){
			tmpBuff += currentChar;
		}else{
			if(i == srcStr.length()-1)tmpBuff+=currentChar;
			strVect.push_back(tmpBuff);
			tmpBuff.clear();
		}
	}
	return strVect;
}

std::string trimLeft(std::string srcStr, char c){
	string::iterator it;
	for(it=srcStr.begin();it<srcStr.end();it++){
		char currentChar = (char)(*it);
		if((currentChar >= 33 && currentChar <= 126)){
			if(c == '\0' || (c != '\0' && c != currentChar)){
				break;
			}
		}
	}
	srcStr.erase(srcStr.begin(), it);
	return srcStr;
}
std::string trimRight(std::string srcStr, char c){
	int i=srcStr.length()-1;
	string::reverse_iterator it;
	for(it=srcStr.rbegin();it<srcStr.rend();it++){
		char currentChar = (char)(*it);
		if((currentChar >= 33 && currentChar <= 126)){
			if(c == '\0' || (c != '\0' && c != currentChar)){
				break;
			}
		}
		i--;
	}
	srcStr.resize(i+1);
	return srcStr;
}
std::string trim(std::string srcStr, char c){
	return trimRight(trimLeft(srcStr, c), c);
}

string toString(const long i){
	stringstream strStrm;
	strStrm<<i;
	const string& str = strStrm.str();
	return str;
}
string toString(const int i){
	stringstream strStrm;
	strStrm<<i;
	const string& str = strStrm.str();
	return str;
}
string toString(const short i){
	stringstream strStrm;
	strStrm<<i;
	const string& str = strStrm.str();
	return str;
}
string toString(const float i){
	stringstream strStrm;
	strStrm<<i;
	const string& str = strStrm.str();
	return str;
}
string toString(const double i){
	stringstream strStrm;
	strStrm<<i;
	const string& str = strStrm.str();
	return str;
}

string toString(const unsigned long i){
	stringstream strStrm;
	strStrm<<i;
	const string& str = strStrm.str();
	return str;
}
string toString(const unsigned int i){
	stringstream strStrm;
	strStrm<<i;
	const string& str = strStrm.str();
	return str;
}
string toString(const unsigned short i){
	stringstream strStrm;
	strStrm<<i;
	const string& str = strStrm.str();
	return str;
}

string toString(const char i){
	stringstream strStrm;
	strStrm<<i;
	const string& str = strStrm.str();
	return str;
}
string toString(const char* i){
	return string(i);
}
const string& toString(const string& str){
	return str;
}

string htmlSpecialChars(string srcStr){
	stringstream retStr;
	for(int i=0;i<srcStr.length();i++){
		switch((char)srcStr[i]){
			case '&':
					retStr<<"&amp;";
				break;
			case '"':
					retStr<<"&quot;";
				break;
			case '\'':
					retStr<<"&#039;";
				break;
			case '<':
					retStr<<"&lt;";
				break;
			case '>':
					retStr<<"&gt;";
				break;
			default:
				retStr<<srcStr[i];
		}
	}
	return retStr.str();
}

