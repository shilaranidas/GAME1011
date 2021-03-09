
#include <iostream>
#include <iomanip>
#include "SimpleHeader.h"
#include "SearchableVector.h"
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
    cout <<endl<<endl<< "======================================Q2===================================" << endl << endl;
    SearchableVector<int> iTable1(SIZE);
    SearchableVector<string> sTable1(SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        iTable1[i] = i * 2;
        sTable1[i] = i + 'a';
        sTable1[i] += "test";
    }
    //display values
    cout << "These values are in iTable1: ";
    iTable1.print();
    cout << "These values are in sTable1: ";
    sTable1.print();
    //search the vectors
    int result;
    cout << "Searching for the number 6 in iTable1: ";
    result = iTable1.findItemBinary(6);
    if (result == -1)
        cout << "6 was not found.\n";
    else
        cout << "6 was found at subscript " << result << endl;
    cout << "Searching for the string ftest in sTable1: ";
    result = sTable1.findItemBinary("ftest");
    if (result == -1)
        cout << "ftest was not found.\n";
    else
        cout << "ftest was found at subscript " << result << endl;
    cout << endl << endl << "======================================Q3===================================" << endl << endl;
    return 0;
}

