#pragma once
#include <iostream>
using namespace std;
template<class T>
class SimpleVector
{
private:
    T* aptr;
    int arraySize;
    int currentSize;
    void subError() const; //handles subscripts out of range
public:
    SimpleVector() //default constructor
    {
        aptr = 0; arraySize = 0; currentSize = 0;
    }
    SimpleVector(int); //constructor
    SimpleVector(const SimpleVector&); //copy constructor
    ~SimpleVector();//destructor
    void push_back(T);//insert the value at the end of the array. return a message if the array is full or successfully pushed
    int size() const
    {
        return arraySize;
    }
    T& operator[](int); //overloaded [] operator
    void print() const; //output array
};
template<class T>
void SimpleVector<T>::subError() const
{
    cout << "ERROR: Subscript out of range.\n";
    exit(0);
}
//constructor sets the size of the array and allocates memory for it
template<class T>
SimpleVector<T>::SimpleVector(int s)
{
    arraySize = s;
    aptr = new T[s];
    for (int i = 0; i < arraySize; i++)
    {
        aptr[i] = T(); //assuming that the datatype being used has a default constructor. (Ex: int -- set the value to 0)
    }
}
template<class T>
SimpleVector<T>::SimpleVector(const SimpleVector& obj)
{
    arraySize = obj.arraySize;
    //aptr = obj.aptr; //BAD
    aptr = new T[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        aptr[i] = obj.aptr[i];//obj[i];//
    }
}
template<class T>
SimpleVector<T>::~SimpleVector()
{
    if (arraySize > 0)
        delete[] aptr;
}
template<class T>
void SimpleVector<T>::push_back(T item)
{

    if (currentSize >= arraySize)
        cout << "Array is full!";
    else
    {
        aptr[currentSize] = item;
        currentSize++;
        cout << "Successfully pushed " << item << endl;
    }

}
template<class T>
T& SimpleVector<T>::operator[](int sub)
{
    if (sub < 0 || sub >> arraySize)
        subError();
    return aptr[sub];
}
template<class T>
void SimpleVector<T>::print() const
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << aptr[i] << ", ";
    }
    cout << endl;
}

