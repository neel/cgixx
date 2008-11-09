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
#ifndef PARAMSMAPCORE_H
#define PARAMSMAPCORE_H

#include <map>
#include <string>

/**
	@author Neel Basu <neel@zigmoyd>
*/
template <typename KeyType, typename ValueType>
class ParamsMapCore : public std::map<KeyType, ValueType>{
	public:
    ParamsMapCore();
    ~ParamsMapCore();
	public:
		bool exists(const KeyType& key) const;
    virtual ValueType get(const KeyType& key) const;
    virtual void set(const KeyType& key, const ValueType& val);
    bool remove(const KeyType& key);
    void removeAll();
		typename ParamsMapCore<KeyType, ValueType>::iterator search(const KeyType& key);
		typename ParamsMapCore<KeyType, ValueType>::const_iterator search(const KeyType& key) const;
		typename ParamsMapCore<KeyType, ValueType>::iterator each();
		typename ParamsMapCore<KeyType, ValueType>::const_iterator each() const;
};
#include "paramsmapcore.hpp"
#endif
