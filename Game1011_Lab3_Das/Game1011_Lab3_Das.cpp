
#include <iostream>
#include <iomanip>
#include "SimpleHeader.h"
using namespace std;


int main()
{
    const int SIZE = 10;
    SimpleVector<int> iTable(SIZE);
    SimpleVector<string> sTable(SIZE);
    /* for (int i = 0; i < SIZE; i++)
     {
         iTable[i] = i * 2;
         dTable[i] = i * 2.14;
     }*/
     //display values
    cout << "These values are in iTable:\n";
    iTable.print();
    cout << "These values are in sTable:\n";
    sTable.print();
    iTable.push_back(10);
    iTable.push_back(15);
    iTable.push_back(5);
    sTable.push_back("test");
    sTable.push_back("push");
    sTable.push_back("pop");
    cout << "These values are in iTable after push:\n";
    iTable.print();
    cout << "These values are in dTable after push:\n";
    sTable.print();
    return 0;
}

