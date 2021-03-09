
#include <iostream>
#include <iomanip>
#include "SimpleHeader.h"
using namespace std;


int main()
{
    const int SIZE = 10;
    SimpleVector<int> iTable(SIZE);
    SimpleVector<double> dTable(SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        iTable[i] = i * 2;
        dTable[i] = i * 2.14;
    }
    //display values
    cout << "These values are in iTable:\n";
    iTable.print();
    cout << "These values are in dTable:\n";
    dTable.print();
    SimpleVector<int> iTable2(iTable);
    cout << "These values are in iTable2:\n";
    iTable2.print();
    //iTable2[10] = 20;
    //// cout << iTable2[10];
    return 0;
}

