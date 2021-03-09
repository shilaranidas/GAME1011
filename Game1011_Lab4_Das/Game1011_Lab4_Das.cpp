#include <iostream>
#include <string>
#include <time.h>
using namespace std;
// A recursive function that 
// check a str[begin..end] is 
// palindrome or not. 
bool isPal(string str, int begin, int end)
{

	// If there is only one character 
	if (begin == end)
		return true;

	// If first and last 
	// characters do not match 
	if (str[begin] != str[end])
		return false;

	// If there are more than  
	// two characters, check if  
	// middle substring is also  
	// palindrome or not. 
	if (begin < end + 1)
		return isPal(str, begin + 1, end - 1);

	return true;
}
bool isPalindrome(string str)
{

	//for working with sample (taco cat)
	//remove space from string
	str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
	int h = str.length();
	//for working with sample (A nut for a jar of tuna)
	//convert all to lowercase
	for (int i = 0; i < h; i++)
		str[i] = tolower(str[i]);
	if (h == 0) return true;
	return isPal(str, 0, h - 1);
}

int main()
{
	std::cout << "\t\t\t\tLab 4:- Recursion" << endl;
	int mainmenu;
	char menu;
	char strarr[20];
	string value, str;
	bool result = false;
	bool mainmenuValid = false, menuValid = false;
	int max, n = 10;
	int a[10];
	do {
		std::cout << "----------------------------" << endl;
		std::cout << "menu ( press number for operation ) \n";
		std::cout << "\t1. Determine whether a given string is a palindrome";
		std::cout << "\n\t2. Perform the quicksort algorithm on a randomly generated list of integers\n\t3. Reverse a given string\n\t4. Quit menu" << endl;
		std::cout << "----------------------------" << endl;
		do {
			std::cout << "choice: ";
			std::cin >> mainmenu;
			std::cin.ignore(INT_MAX, '\n'); // Clear/flush out anything left in buffer.
										   // If we ARE in a fail state, this line will get ignored.
			if (std::cin.fail()) // Uh oh, our bad input created a stream fail.
			{
				std::cin.clear(); // Clear the error state.
				std::cin.ignore(INT_MAX, '\n'); // Clear/flush out anything left in buffer.
				std::cout << "Invalid input, try again." << endl;
			}
			else if (mainmenu < 1 && mainmenu>4) // Out of bounds.
				std::cout << "Invalid input! Try again." << endl;
			else
				mainmenuValid = true;
		} while (mainmenuValid != true);

		switch (mainmenu)
		{
		case 1:
			cout << "Enter a string: ";
			std::getline(std::cin, str);
			result = isPalindrome(str);
			if (result) std::cout << str << " is palindrome" << endl;
			else std::cout << str << " is Not Palindrome" << endl;
			break;
		case 2:
			
			break;
		case 3:
			
			break;

		}
	} while (mainmenu != 4);
}
