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
#ifndef HTTPHEADER_H
#define HTTPHEADER_H
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "paramsmap.h"
#include "stringlist.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::map;


/**
 * HTTP Header Container
 * all headers are contained in \ref HttpHeader::commited member variable
 * and latter sent to the browser by invoking \ref HttpHeader::commit() member function
 *
 * @author Neel Basu <neel@zigmoyd>
 */
class HttpHeader{
	public:
		/*!
			Construct's the Class
			initializes \ref HttpHeader::commited to \c false
		*/
		HttpHeader();
		~HttpHeader();
		/*!
			Add's a Header while the header argument is passed as "key: value" format
		*/
		void addHeader(const string&);
		/*!
			Add's a header while the header argument is passed as key, value format e.g. with two arguments
			they are concated with a ':' character and stored into headers Vector
		*/
    void addHeader(const string&, const string&);
		/*!
			Commit's HTTP Headers
			as headers are ultimately stored as "Key: Value" strign in the vector.
			it just implodes it by a \\n and prints it to cout
		*/
    void commit();
		/*!
			returns boolean value wheather the HTTP headers have been sent or not.
		*/
    bool isCommited() const;
	private:
		/*!
			Holds boolean value wheather the HTTP headers have been sent or not.
		*/
    bool commited;
		/*!
			a String vector that contains all HTTP Headers as string
		*/
		StringList headersList;
};
#endif
