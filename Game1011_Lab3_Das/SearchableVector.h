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
	int findItemBinary(T);//binary search for an item. Returns the subscript
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
template<class T>
int SearchableVector<T>::findItemBinary(T item)
{

	int l = 0, r = this->size() - 1, mid;
	while (r >= l) {
		mid = l + (r - l) / 2;

		// If the element is present at the middle 
		// itself 
		if (this->operator[](mid) == item)
			return mid;

		// If item greater, ignore left half 
		if (this->operator[](mid) < item)
			l = mid + 1;

		// If item is smaller, ignore right half 
		else
			r = mid - 1;
	}

	// We reach here when element is not 
	// present in array 
	return -1;
}
