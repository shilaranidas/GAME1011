#pragma once
#include "SimpleHeader.h"

template<class T>
class SearchableVector : public SimpleVector<T>
{
public:
	SearchableVector(int s) :SimpleVector<T>(s) {}//constructor
	SearchableVector(SearchableVector& obj) : SimpleVector<T>(obj) {};//copy constructor
	SearchableVector(SimpleVector<T>& obj) : SimpleVector<T>(obj) {}//additional copy constructor
	int findItem(T);//search for an item. Returns the subscript
};
/*
//copy constructor
template<class T>
SearchableVector<T>::SearchableVector(SearchableVector& obj) :SimpleVector<T>(obj)
{

}*/

template<class T>
int SearchableVector<T>::findItem(T item)
{
	for (int i = 0; i < this->size(); i++)
	{
		if (this->operator[](i) == item) //compare every item in the array vs "item"
			return i;
	}
	return -1;
}
