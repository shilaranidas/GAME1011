
#include <iostream>
#include <iomanip>
#include "SimpleHeader.h"
using namespace std;


int main()
{
    cout << "======================================Q1==================================="<<endl<<endl;
    const int SIZE = 10;
    SimpleVector<int> iTable(SIZE);
    SimpleVector<string> sTable(SIZE);
    /* for (int i = 0; i < SIZE; i++)
     {
         iTable[i] = i * 2;
         dTable[i] = i * 2.14;
     }*/
     //display values
    cout << "These values are in iTable: ";
    iTable.print();
    cout << "These values are in sTable: ";
    sTable.print();
    iTable.push_back(10);
    iTable.push_back(15);
    iTable.push_back(5);
    sTable.push_back("test");
    sTable.push_back("push");
    sTable.push_back("pop");
    cout << "These values are in iTable after push: ";
    iTable.print();
    cout << "These values are in sTable after push: ";
    sTable.print();
    iTable.pop_back();
    sTable.pop_back();
    cout << "These values are in iTable after pop: ";
    iTable.print();
    cout << "These values are in sTable after pop: ";
    sTable.print();
    iTable.pop_back();
    sTable.pop_back();
    cout << "These values are in iTable after pop: ";
    iTable.print();
    cout << "These values are in sTable after pop: ";
    sTable.print();
    return 0;
}

