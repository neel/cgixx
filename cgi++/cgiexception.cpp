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
#include "cgiexception.h"

CGIException::CGIException(const string& errMsg):std::runtime_error(errMsg), mErrMsg(errMsg){

}

CGIException::CGIException(const string& from, const string& errStr):std::runtime_error("\n----------  &lt;"+from+"&gt;  -----------\n"+errStr+"\n----------------------------------------\n"), mErrMsg("\n----------  &lt;"+from+"&gt;  -----------\n"+errStr+"\n----------------------------------------\n"){

}

ostream &operator<<(ostream& o, CGIException& ex){
	o<<ex.getMsg();
	return o;
}

CGIException::~CGIException() throw(){

}



FileNotReadableException::FileNotReadableException(const string& file):CGIException("CGI::System::FileUnReadable", ("File: "+file+" Couldn't be opened for reading")), fileName(file){

}

FileNotReadableException::FileNotReadableException(const string& errForm, const string& file):CGIException(errForm, ("File: "+file+" Couldn't be opened for reading")){

}

FileNotReadableException::FileNotReadableException(const string& errForm, const string& errStr, const string& file):CGIException(errForm, errStr), fileName(file){

}

const string& FileNotReadableException::getFileName() const{
	return fileName;
}

FileNotReadableException::~FileNotReadableException() throw(){

}




FileNotWritableException::FileNotWritableException(const string& file):CGIException("CGI::System::FileUnWritable", ("File: "+file+" Couldn't be opened for writing")), fileName(file){

}

FileNotWritableException::FileNotWritableException(const string& errForm, const string& file):CGIException(errForm, ("File: "+file+" Couldn't be opened for writting")){

}

FileNotWritableException::FileNotWritableException(const string& errForm, const string& errStr, const string& file):CGIException(errForm, errStr), fileName(file){

}

const string& FileNotWritableException::getFileName() const{
	return fileName;
}

FileNotWritableException::~FileNotWritableException() throw(){

}



//{ SessionFileNotReadable

SessionFileNotReadable::SessionFileNotReadable(const string& file):FileNotReadableException("CGI::System::Session::FileUnReadable", file){

}

//} SessionFileNotReadable
//{ SessionFileNotWritable

SessionFileNotWritable::SessionFileNotWritable(const string& file):FileNotWritableException("CGI::System::Session::FileNotWritable", file){

}

//} SessionFileNotWritable
//{ SessionDataNotWritable

SessionDataNotWritable::SessionDataNotWritable(const string& file):FileNotWritableException("CGI::System::Session::DataNotwritable", "Session Data not writable on file"+file, file){

}

//} SessionDataNotWritable
//{ SessionDataUnReadable
SessionDataNotReadable::SessionDataNotReadable(const string& file):FileNotReadableException("CGI::System::Session::DataNotReadable", "Session Data not readable on file"+file, file){

}

//} SessionDataUnReadable
//{ SessionDataUnReadable

SessionFileNotParsable::SessionFileNotParsable(const string& file):FileNotReadableException("CGI::System::Session::DataNotParsable", "Session Data not Parsable on file"+file, file){

}

//} SessionDataUnReadable



