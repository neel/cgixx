#include "paramsmapcore.h"

template <typename KeyType, typename ValueType>
ParamsMapCore<KeyType, ValueType>::ParamsMapCore() : std::map<KeyType, ValueType>(){

}

template <typename KeyType, typename ValueType>
ParamsMapCore<KeyType, ValueType>::~ParamsMapCore(){

}
//When The Ship Comes In :: Arlo Guthrie
template <typename KeyType, typename ValueType>
bool ParamsMapCore<KeyType, ValueType>::exists(const KeyType& key) const{
	typename ParamsMapCore<KeyType, ValueType>::const_iterator it=find(key);
	return (it != this->end());
}

template <typename KeyType, typename ValueType>
bool ParamsMapCore<KeyType, ValueType>::remove(const KeyType& key){
	if(exists(key)){
		erase(find(key));
	}
	return false;
}

template <typename KeyType, typename ValueType>
void ParamsMapCore<KeyType, ValueType>::set(const KeyType& key, const ValueType& val){
	operator[](key) = val;
}

template <typename KeyType, typename ValueType>
ValueType ParamsMapCore<KeyType, ValueType>::get(const KeyType& key) const{
	if(exists(key)){
		typename ParamsMapCore<KeyType, ValueType>::const_iterator it=find(key);
		return (it->second);
	}
	ValueType d;
	return d;
}

template <typename KeyType, typename ValueType>
void ParamsMapCore<KeyType, ValueType>::removeAll(){
	this->clear();
}

template <typename KeyType, typename ValueType>
typename ParamsMapCore<KeyType, ValueType>::iterator ParamsMapCore<KeyType, ValueType>::search(const KeyType& key){
	return find(key);
}

template <typename KeyType, typename ValueType>
typename ParamsMapCore<KeyType, ValueType>::const_iterator ParamsMapCore<KeyType, ValueType>::search(const KeyType& key) const{
	return find(key);
}

template <typename KeyType, typename ValueType>
typename ParamsMapCore<KeyType, ValueType>::iterator ParamsMapCore<KeyType, ValueType>::each(){
	static typename ParamsMapCore<KeyType, ValueType>::iterator tIt=this->begin();
	typename ParamsMapCore<KeyType, ValueType>::iterator ret = tIt;
	if(tIt != this->end()){
		tIt++;
	}
	return ret;
}

template <typename KeyType, typename ValueType>
typename ParamsMapCore<KeyType, ValueType>::const_iterator ParamsMapCore<KeyType, ValueType>::each() const{
	static typename ParamsMapCore<KeyType, ValueType>::const_iterator tIt=this->begin();
	typename ParamsMapCore<KeyType, ValueType>::const_iterator ret = tIt;
	if(tIt != this->end()){
		tIt++;
	}
	return ret;
}
