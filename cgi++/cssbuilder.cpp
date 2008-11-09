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
#include "cssbuilder.h"

CSSBuilder::CSSBuilder(stringstream& cssStream):css(cssStream), commited(false){

}


CSSBuilder::~CSSBuilder(){

}


/*!
    \fn CSSBuilder::commit() const
 */
void CSSBuilder::commit() const{
	for(CSSStruct::const_iterator it = cssStruct.begin();it != cssStruct.end();it++){
		css<<it->first<<"{";
		for(RuleSet::const_iterator rit=it->second.begin();rit != it->second.end();rit++){
			css<<rit->first<<": "<<rit->second<<";";
		}
		css<<"}";
	}
	commited = true;
}

/*!
    \fn CSSBuilder::isCommited() const
 */
bool CSSBuilder::isCommited() const{
	return commited;
}


/*!
    \fn CSSBuilder::makeSelector(const string& selectorName)
 */
CSSBuilder& CSSBuilder::makeSelector(const string& selectorName){
	cssStruct[selectorName] = ruleSetHolder;
	return *this;
}


/*!
    \fn CSSBuilder::addToSelector(const string& selectorName)
 */
CSSBuilder& CSSBuilder::addToSelector(const string& selectorName){
	if(selectorExists(selectorName)){
		cssStruct[selectorName] = ruleSetHolder;
	}
	return *this;
}


/*!
    \fn CSSBuilder::copyFromSelector(const string& selectorName)
 */
CSSBuilder& CSSBuilder::copyFromSelector(const string& selectorName){
	if(selectorExists(selectorName)){
		getSelector(selectorName);
	}
	return *this;
}


/*!
    \fn CSSBuilder::getSelector(const string& selectorName)
 */
CSSBuilder& CSSBuilder::getSelector(const string& selectorName){
  if(selectorExists(selectorName)){
		CSSStruct::const_iterator it = cssStruct.find(selectorName);
		ruleSetHolder = it->second;
	}
	return *this;
}


bool CSSBuilder::selectorExists(const string& selectorName) const{
	CSSStruct::const_iterator it = cssStruct.find(selectorName);
	return (it != cssStruct.end());
}


CSSBuilder& CSSBuilder::removeSelector(const string& selectorName){
	if(selectorExists(selectorName)){
		CSSStruct::iterator it = cssStruct.find(selectorName);
		cssStruct.erase(it);
	}
	return *this;
}


/*!
    \fn CSSBuilder::addRule(const string& key, const string& val)
*/
CSSBuilder& CSSBuilder::addRule(const string& key, const string& val){
	ruleSetHolder[key] = val;
	return *this;
}


/*!
    \fn CSSBuilder::getRule(const string& key) const
 */
string CSSBuilder::getRule(const string& key) const{
	if(ruleExists(key)){
		RuleSet::const_iterator it = ruleSetHolder.find(key);
		return it->second;
	}
	return string("");
}


/*!
    \fn CSSBuilder::removeRule(const string& key)
 */
CSSBuilder& CSSBuilder::removeRule(const string& key){
	if(ruleExists(key)){
		RuleSet::iterator it = ruleSetHolder.find(key);
		ruleSetHolder.erase(it);
	}
	return *this;
}


/*!
    \fn CSSBuilder::ruleExists(const string& key) const
 */
bool CSSBuilder::ruleExists(const string& key) const{
	RuleSet::const_iterator it = ruleSetHolder.find(key);
	return (it != ruleSetHolder.end());
}

void CSSBuilder::end(){
	ruleSetHolder.clear();
}


void CSSBuilder::operator++(int){
	end();
}

