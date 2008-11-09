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
#ifndef REQUEST_H
#define REQUEST_H
#include <cstdlib>
/**
	@author Neel Basu <neel@zigmoyd>
*/
class RawRequest{
	protected:
		const char* serverSoftware;
		const char* serverName;
		const char* gatewayInterface;
		const char* serverProtocol;
		const char* serverPort;
		const char* requestMethod;
		const char* pathInfo;
		const char* pathTranslated;
		const char* scriptName;
		const char* queryString;
		const char* remoteHost;
		const char* remoteAddr;
		const char* authType;
		const char* remoteUser;
		const char* remoteIdent;
		const char* contentType;
		const char* contentLength;
		const char* httpAccept;
		const char* httpUserAgent;
	public:
    RawRequest();
    ~RawRequest();
    const char* getGatewayInterface(){
			return gatewayInterface;
		};
    const char* getServerSoftware(){
			return serverSoftware;
		};
    const char* getServerName(){
			return serverName;
		};
    const char* getServerProtocol(){
			return serverProtocol;
		};
    const char* getRequestMethod(){
			return requestMethod;
		};
    const char* getServerPort(){
			return serverPort;
		};
    const char* getPathInfo(){
			return pathInfo;
		};
    const char* getAuthType(){
			return authType;
		};
    const char* getContentType(){
			return contentType;
		};
    const char* getHttpAccept(){
			return httpAccept;
		};
    const char* getHttpUserAgent(){
			return httpUserAgent;
		};
    const char* getPathTranslated(){
			return pathTranslated;
		};
    const char* getQueryString(){
			return queryString;
		};
    const char* getRemoteAddr(){
			return remoteAddr;
		};
    const char* getRemoteHost(){
			return remoteHost;
		};
    const char* getRemoteIdent(){
			return remoteIdent;
		};
    const char* getRemoteUser(){
			return remoteUser;
		};
    const char* getScriptName(){
			return scriptName;
		};
    const char* getContentLength(){
			return contentLength;
		};
};

#endif
