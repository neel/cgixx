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
#include "htmltag.h"

HtmlTag::HtmlTag(bool tagType):mTagType(tagType){
	quoteType = QUOTE_DOUBLE;
}

HtmlTag::HtmlTag(const string& tagName, bool tagType):mTagName(tagName), mTagType(tagType){
	quoteType = QUOTE_DOUBLE;
}

HtmlTag::~HtmlTag(){

}


string HtmlTag::makeAttr() const{
	stringstream tagBuff;
	for(ParamsMap::const_iterator it=mAttr.begin();it != mAttr.end();it++){
		tagBuff<<" "<<it->first<<"="<<quoteType<<it->second<<quoteType;
	}
	return tagBuff.str();
}

void HtmlTag::setTagName(const string& tagName){
	mTagName = tagName;
}

const string& HtmlTag::getTagName() const{
	return mTagName;
}

HtmlTag& HtmlTag::setAttr(const string& key, const Var& val){
	mAttr[key] = val;
	return *this;
}

Var HtmlTag::getAttr(const string& key) const{
	ParamsMap::const_iterator it = mAttr.find(key);
	return (it != mAttr.end()) ? it->second : Var(0x0);
}

HtmlTag& HtmlTag::removeAttr(const string& key){
	ParamsMap::iterator it = mAttr.find(key);
	if(it != mAttr.end()){
		mAttr.erase(it);
	}
	return *this;
}

HtmlTag& HtmlTag::setId(const Var& val){
	return setAttr("id", val);
}

HtmlTag& HtmlTag::setClass(const Var& val){
	return setAttr("class", val);
}

HtmlTag& HtmlTag::setName(const Var& val){
	return setAttr("name", val);
}

Var HtmlTag::getId() const{
	return getAttr("id");
}

Var HtmlTag::getName() const{
	return getAttr("name");
}

Var HtmlTag::getClass() const{
	return getAttr("class");
}

string HtmlTag::open() const{
	stringstream tagBuff;
	tagBuff<<"<"<<mTagName<<makeAttr()<<((mTagType == TAG_PAIR) ? "" : " /")<<">";
	return tagBuff.str();
}

string HtmlTag::close() const{
	if(mTagType == TAG_PAIR){
		stringstream tagBuff;
		tagBuff<<"</"<<mTagName<<">";
		return tagBuff.str();
	}
	return string("");
}

string HtmlTag::autoComplete() const{
	if(mTagType == TAG_PAIR && HtmlTagAutoCompleter::detectStatus(mTagName)){
		return close();
	}else{
		return open();
	}
}

ostream& operator<<(ostream& o, const HtmlTag& t){
	o<<t.autoComplete();
	return o;
}

