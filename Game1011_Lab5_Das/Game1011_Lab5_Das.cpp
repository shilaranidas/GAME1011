// Game1011_Lab5_Das.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DynTempStack.h"

int main()
{
	cout << "===============DynTempStack<primitive>==================" << endl;
	DynTempStack<int> stack;
	int catchVar;
	for (int i = 5; i < 15; i = i + 5)
	{
		cout << "push " << i << endl;
		stack.push(i);
	}
	stack.displayList();
	cout << " pop: ";
	stack.pop(catchVar);
	cout << catchVar << endl;

	stack.displayList();

	cout << " pop: ";
	stack.pop(catchVar);
	cout << catchVar << endl;
	stack.displayList();
	cout << endl;
	cout << "===============DynTempStack<non-primitive>==================" << endl;
	DynTempStack<string> stack1;
	string catchVar1;
	cout << "push aa" << endl;
	stack1.push("aa");
	cout << "push bb" << endl;
	stack1.push("bb");
	stack1.displayList();
	cout << "push cat" << endl;
	stack1.push("cat");
	stack1.displayList();

	for (int i = 0; i < 3; i++)
	{
		cout << " pop: ";
		stack1.pop(catchVar1);
		cout << catchVar1 << endl;
		stack1.displayList();
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
