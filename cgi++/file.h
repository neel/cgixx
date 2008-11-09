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
#ifndef FILE_H
#define FILE_H
#include <vector>
#include <map>
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <string>
#include <cgiexception.h>
#include <sstream>
#include "stringlist.h"

using std::string;
using std::vector;
using std::ifstream;
using std::ofstream;
using std::ios_base;
using std::ios;


/**
	Basic File handle Class.
	generalizes common operations

	@author Neel Basu <neel@zigmoyd>
*/
class File{
	public:
    File();
    ~File();
    static bool isReadable(const string& fileName);
    static bool exists(const string& fileName);
    static bool isWritable(const string& fileName);
    static bool createEmptyFile(const string& fileName);
    static StringList splitLines(const string& fileName);
};

#endif
