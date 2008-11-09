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
#ifndef CGIEXCEPTION_H
#define CGIEXCEPTION_H

#include <string>
#include <iostream>
#include <stdexcept>

using std::string;
using std::ostream;

/**
	@author Neel Basu <neel@zigmoyd>
*/
class CGIException : public std::runtime_error{
	private:
		string mErrMsg;
	public:
    CGIException(const string& errMsg);
		CGIException(const string& from, const string& errStr);
    virtual ~CGIException() throw();
		const string& getMsg() const{
			return mErrMsg;
		}
		friend ostream& operator<<(ostream& o, CGIException& ex);
};

class FileNotReadableException : public CGIException{
	protected:
		string fileName;
	public:
		FileNotReadableException(const string& file);
		FileNotReadableException(const string& errForm, const string& file);
		FileNotReadableException(const string& errForm, const string& errStr, const string& file);
		virtual ~FileNotReadableException() throw();
		const string& getFileName() const;
};

class FileNotWritableException : public CGIException{
	protected:
		string fileName;
	public:
		FileNotWritableException(const string& file);
		FileNotWritableException(const string& errForm, const string& file);
		FileNotWritableException(const string& errForm, const string& errStr, const string& file);
		virtual ~FileNotWritableException() throw();
		const string& getFileName() const;
};

class SessionFileNotReadable : public FileNotReadableException{
	public:
		SessionFileNotReadable(const string& file);
};

class SessionFileNotWritable : public FileNotWritableException{
	public:
		SessionFileNotWritable(const string& file);
};

class SessionDataNotWritable : public FileNotWritableException{
	public:
		SessionDataNotWritable(const string& file);
};

class SessionDataNotReadable : public FileNotReadableException{
	public:
		SessionDataNotReadable(const string& file);
};

class SessionFileNotParsable : public FileNotReadableException{
	public:
		SessionFileNotParsable(const string& file);
};

#endif
