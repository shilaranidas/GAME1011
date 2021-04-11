// Game1011_Lab5_Das.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DynTempStack.h"
#include "DynTempQueue.h"

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

	cout << "===============DynTempQueue<primitive>==================" << endl;
	DynTempQueue<int> queue;
	int catchVar2;
	for (int i = 1; i <= 10; i = i + 2)
	{
		cout << "enqueue " << i * i << endl;
		queue.enqueue(i * i);
	}
	queue.displayList();
	cout << " dequeue: ";
	queue.dequeue(catchVar2);
	cout << catchVar2 << endl;

	queue.displayList();

	cout << " dequeue: ";
	queue.dequeue(catchVar2);
	cout << catchVar2 << endl;
	queue.displayList();
	cout << "===============DynTempQueue<non-primitive>==================" << endl;
	DynTempQueue<string> queue1;
	string catchVar3;
	cout << "enqueue aa" << endl;
	queue1.enqueue("aa");
	cout << "enqueue bb" << endl;
	queue1.enqueue("bb");
	queue1.displayList();
	cout << "enqueue cat" << endl;
	queue1.enqueue("cat");
	queue1.displayList();

	for (int i = 0; i < 3; i++)
	{
		cout << " dequeue: ";
		queue1.dequeue(catchVar3);
		cout << catchVar3 << endl;
		queue1.displayList();
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
