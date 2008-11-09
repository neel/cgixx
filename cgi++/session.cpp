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
#include "session.h"


Session::Session(Request& req):requestRef(req), id(""), name(SessionConfig::getName()), cookieParams(sessionCookieParams()), sessPath(SessionConfig::getSessPath()){

}

Session::~Session(){

}

Session::Session(Request& req, const string& path):requestRef(req){
	sessPath = path;
}

/*!
	set the reference to global request object to requestRef
*/
void Session::setRequestHandle(Request& req){
	//requestRef = req;
}

/*!
    \fn Session::sessionIdProvided() const
 */
bool Session::sessionIdProvided() const{
	ParamsMap::iterator it = requestRef.cookie.find(name);
	return (it != requestRef.cookie.end());
}

/*!
    \fn Session::getSessionId() const
 */
Var Session::getSessionId() const{
	ParamsMap::iterator it = requestRef.cookie.find(name);
	return (it != requestRef.cookie.end()) ? it->second : Var("");
}

/*!
start's the session.
\internal Handle's/decides the session ID and session file name
<pre>
when the user has specified a session variable with a Session Id through cookies.
	first check wheather that session ID exists or not.
		if exists
			use that session ID
			store that session ID into id member variable
			get the full path to the session file of that session ID and store it on sessFileName member variable
			goto Y
		if doesn't exists
			goto X
if the user hasn't provided a Session Id through cookies
	goto X

assign full path to that session file in sessFileName member variable.

X:
	generate an empty session file and store the Session Id in id member variable.
	and also send a session cookie with that session id.

Y:
	Read the contents of the session file and store it into item member variable.
</pre>
*/
void Session::start(){
	if(!sessionIdProvided() || (sessionIdProvided() && !File::exists(fullSessionPath(getSessionId().toString())))){
		id = createEmptySessionFile();
		requestRef.setCookie(name, Var(id));
		sessFileName = fullSessionPath(id);
	}else{
		id = getSessionId().toString();
		sessFileName = fullSessionPath(id);
		item = readSessionData();
	}
}

/*!
Commit's the session.
\internal
loops through item member variable for all sessions and stores it in a humanreadable and parsable format
in a session file.\n
that file may be created or modified depending on if the user has speciefied a session cookie and that session file exists
that existing session file would be used else a new session file will be created to store it.\n
Generates the md5 of that filename and send's that md5 string as cookie with the cookie Parameters taken from
sessionCookieParams member variable.\n
uses the global request object referenced on requestRef to add that cookie.
*/
void Session::commit(){
	dumpSessionData();
}

const string& Session::getSessPath() const{
	return sessPath;
}

void Session::setSessPath(const string& path){
	sessPath = path;
}

/*!
	Add's a session as string, Var key pair into item member variable
*/
bool Session::add(const string& key, const Var& val){
	if(item.insert(make_pair(key, val)).second == false){
		return false;
	}
	return true;
}

/*!
	checks wheather a session with the provided key exists or not
*/
bool Session::exists(const string& key){
	ParamsMap::iterator it = item.find(key);
	return (it != item.end());
}

/*!
	removes a session
*/
bool Session::remove(const string& key){
	ParamsMap::iterator it = item.find(key);
	if(it != item.end()){
		item.erase(it);
		return true;
	}
	return false;
}

/*!
	modifies a session
*/
bool Session::modify(const string& key, const Var& val){
	if(exists(key)){
		item[key] = val;
		return true;
	}
	return false;
}

bool Session::set(const string& key, const Var& val){
	if(exists(key)){
		return modify(key, val);
	}else{
		return add(key, val);
	}
}

/*!
	get value of a Session
*/
const Var Session::get(const string& key) const{
	ParamsMap::const_iterator it = item.find(key);
	///{@ @todo for Debug purpouse Only
	for(ParamsMap::const_iterator it = item.begin(); it != item.end();it++){
		string keyFound = it->first;
		string valueFound = it->second;
	}
	///@} @todo for Debug purpouse Only
	if(it != item.end()){
		return it->second;
	}
	const Var d("");
	return d;
}

/*!
	create's an empty session file.
	returns the session ID of the newly created Session file.
	Session::start()
*/
string Session::createEmptySessionFile() const{
	string sessId;
	while(true){
		string conj = ::toString(time(0x0))+":"+::toString(rand());
		MD5 md5(conj);
		conj = md5.hex_digest();
		sessId=conj;
		if(!File::exists(fullSessionPath(sessId))){
			break;
		}
	}
	return sessId;
}

/*!
	Read's session Data from the session File and returns it into ParamsMap format
*/
ParamsMap Session::readSessionData() const{
	if(!File::exists(sessFileName)){
		throw(SessionFileNotReadable(sessFileName));
	}
	ParamsMap keyVal;
	StringList lines = File::splitLines(sessFileName);
	for(StringList::iterator it=lines.begin();it != lines.end();it++){
		StringList pair = split(string(*it), ':');
		if(pair[1].length() >= 1){
			keyVal[base64Decode(pair[0])] = Var(base64Decode(pair[1]));
			//keyVal[pair[0]] = Var(pair[1]);
		}
	}
	return keyVal;
}

/*!
	dump's session data in ParamsMap format into item member variable from the provided session file.
*/
void Session::dumpSessionData(){
	string sessDump="";
	ParamsMap::iterator it;
	for(it=item.begin();it != item.end();it++){
		sessDump += base64Encode(it->first)+":"+base64Encode(it->second.toString())+"\n";
		//sessDump += (it->first)+":"+(it->second.toString())+"\n";
	}
	ofstream sessFile;
	sessFile.exceptions(ifstream::eofbit | ifstream::failbit | ifstream::badbit);
	try{
		sessFile.open(sessFileName.c_str());
	}catch(...){
		throw(SessionFileNotWritable(sessFileName));
	}
	try{
		sessFile << sessDump;
	}catch(...){
		throw(SessionDataNotWritable(sessFileName));
	}
	sessFile.close();
}

string Session::fullSessionPath(const string& sessId) const{
	return trimRight(getSessPath(), '/')+"/"+sessId;
}



