/***************************************************************************
 *   Copyright (C) 2008 by Neel Basu   *
 *   neel@zigmoyd   *
 *                                                                         *
 *   This program is free software=getenv(); you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation=getenv(); either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY=getenv(); without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program=getenv(); if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "request.h"

RawRequest::RawRequest(){
	const char* dummy;
	serverSoftware=(dummy = getenv("SERVER_SOFTWARE")) ? dummy : "";
	serverName=(dummy = getenv("SERVER_NAME")) ? dummy : "";
	gatewayInterface=(dummy = getenv("GATEWAY_INTERFACE")) ? dummy : "";
	serverProtocol=(dummy = getenv("SERVER_PROTOCOL")) ? dummy : "";
	serverPort=(dummy = getenv("SERVER_PORT")) ? dummy : "";
	requestMethod=(dummy = getenv("REQUEST_METHOD")) ? dummy : "";
	pathInfo=(dummy = getenv("PATH_INFO")) ? dummy : "";
	pathTranslated=(dummy = getenv("PATH_TRANSLATED")) ? dummy : "";
	scriptName=(dummy = getenv("SCRIPT_NAME")) ? dummy : "";
	queryString=(dummy = getenv("QUERY_STRING")) ? dummy : "";
	remoteHost=(dummy = getenv("REMOTE_HOST")) ? dummy : "";
	remoteAddr=(dummy = getenv("REMOTE_ADDR")) ? dummy : "";
	authType=(dummy = getenv("AUTH_TYPE")) ? dummy : "";
	remoteUser=(dummy = getenv("REMOTE_USER")) ? dummy : "";
	remoteIdent=(dummy = getenv("REMOTE_IDENT")) ? dummy : "";
	contentType=(dummy = getenv("CONTENT_TYPE")) ? dummy : "";
	contentLength=(dummy = getenv("CONTENT_LENGTH")) ? dummy : "";
	httpAccept=(dummy = getenv("HTTP_ACCEPT")) ? dummy : "";
	httpUserAgent=(dummy = getenv("HTTP_USER_AGENT")) ? dummy : "";
}


RawRequest::~RawRequest(){

}
