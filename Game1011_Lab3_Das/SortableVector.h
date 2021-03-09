#pragma once
#include "SimpleHeader.h"

template<class T>
class SortableVector : public SimpleVector<T>
{
public:
    SortableVector(int s) :SimpleVector<T>(s) {}//constructor
    SortableVector(SortableVector& obj) : SimpleVector<T>(obj) {};//copy constructor
    SortableVector(SimpleVector<T>& obj) : SimpleVector<T>(obj) {}//additional copy constructor
   

};
/*
//copy constructor
template<class T>
SearchableVector<T>::SearchableVector(SearchableVector& obj) :SimpleVector<T>(obj)
{

}*/


