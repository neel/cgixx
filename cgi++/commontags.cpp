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
#include "commontags.h"

b::b() : HtmlTag(string("b")){

}

i::i() : HtmlTag(string("i")){

}

u::u() : HtmlTag(string("u")){

}

br::br() : HtmlTag(string("br"), TAG_STANDALONE){

}

hr::hr() : HtmlTag(string("hr"), TAG_STANDALONE){

}

a::a() : HtmlTag(string("a")){

}

a::a(const string& link) : HtmlTag(string("a")){
	setAttr("href", link);
}

HtmlTag& a::setHref(const string& link){
	return setAttr("href", link);
}

Var a::getHref() const{
	return getAttr("href");
}

HtmlTag& a::setTitle(const string& title){
	return setAttr("title", title);
}

Var a::getTitle() const{
	return getAttr("title");
}

span::span() : HtmlTag(string("span")){

}

dv::dv() : HtmlTag(string("div")){

}

pre::pre() : HtmlTag(string("pre")){

}

label::label() : HtmlTag(string("label")){

}

label::label(const string& fr) : HtmlTag(string("label")){
	setAttr("for", fr);
}

HtmlTag& label::setFor(const string& fr){
	return setAttr("for", fr);
}

Var label::getFor() const{
	return getAttr("for");
}

h::h(unsigned short int l) : HtmlTag(string("h"+::toString(l))){

}


form::form(): HtmlTag(string("form")){
	setAttr("method", "post");
}

form::form(const string& method, const string& action): HtmlTag(string("form")){
	setAttr("method", method);
	setAttr("action", action);
}

/*!
    \fn form::openMultiPart()
 */
string form::openMultiPart(){
	setAttr("encrypte", "multipart/form-data");
	return open();
}


/*!
    \fn form::setAction(const string& action)
 */
HtmlTag& form::setAction(const string& action){
	return setAttr("action", action);
}


/*!
    \fn form::setMethod(const string& methodName)
 */
HtmlTag& form::setMethod(const string& method){
	return setAttr("method", method);
}

input::input(): HtmlTag(string("input"), TAG_STANDALONE){

}

input::input(const string& type, const string& name, const Var& value): HtmlTag(string("input"), TAG_STANDALONE){
	setAttr("type", type);
	setAttr("name", name);
	setAttr("value", value);
}

HtmlTag& input::setType(const string& type){
	return setAttr("type", type);
}

HtmlTag& input::setValue(const Var& value){
	return setAttr("value", value);
}

textbox::textbox(): input(string("text")){

}

password::password(): input(string("password")){

}

hidden::hidden(): input(string("hidden")){

}

uploadbox::uploadbox(): input(string("file")){

}

checkbox::checkbox(): input(string("checkbox")){

}

radio::radio(): input(string("radio")){

}

submit::submit(): input(string("submit")){

}

reset::reset(): input(string("reset")){

}

