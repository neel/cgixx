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
#include "file.h"

File::File(){

}


File::~File(){

}

/*!
    \fn File::isReadable(const string& fileName)
 */
bool File::isReadable(const string& fileName){
	if(!File::exists(fileName))return false;
	ifstream handle(fileName.c_str(), ios::in);
	bool ret = handle.is_open();
	handle.close();
	return ret;
}

/*!
    \fn File::exists(const string& fileName)
 */
bool File::exists(const string& fileName){
	struct stat stFileInfo;
	return (stat(fileName.c_str(),&stFileInfo) == 0);
}

/*!
    \fn File::isWritable(const string& fileName)
 */
bool File::isWritable(const string& fileName){
	if(!File::exists(fileName))return false;
	ofstream handle(fileName.c_str(), ios_base::app);
	bool ret = handle.is_open();
	handle.close();
	return ret;
}

/*!
    \fn File::createEmptyFile(const string& fileName)
 */
bool File::createEmptyFile(const string& fileName){
	ofstream handle(fileName.c_str());
	bool ret = handle.is_open();
	handle.close();
	return ret;
}

/*!
    \fn File::splitLines(const string& fileName)
 */
StringList File::splitLines(const string& fileName){
	if(!File::isReadable(fileName))throw(FileNotReadableException(fileName));
	ifstream handle(fileName.c_str(), ios::in);
	StringList lines;
	string line;
	while(getline(handle, line, '\n')){
		lines.push_back(string(line));
		line = "";
	}
	if(handle.is_open())handle.close();
	return lines;
}
