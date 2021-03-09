#pragma once
#include "SimpleHeader.h"

template<class T>
class SortableVector : public SimpleVector<T>
{
public:
    SortableVector(int s) :SimpleVector<T>(s) {}//constructor
    SortableVector(SortableVector& obj) : SimpleVector<T>(obj) {};//copy constructor
    SortableVector(SimpleVector<T>& obj) : SimpleVector<T>(obj) {}//additional copy constructor
    void sort();//sort the arrayin ascending order.

};
/*
//copy constructor
template<class T>
SearchableVector<T>::SearchableVector(SearchableVector& obj) :SimpleVector<T>(obj)
{

}*/

template<class T>
void SortableVector<T>::sort()
{
    int i, j;
    T key;
    //insertion sort
    for (i = 1; i < this->size(); i++) {
        key = this->operator[](i);
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && this->operator[](j) > key) {
            this->operator[](j + 1) = this->operator[](j);
            j = j - 1;
        }
        this->operator[](j + 1) = key;
    }
}
