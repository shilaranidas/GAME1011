#include <iostream>
#include <string>
//#include "Character.h"
#include "SpecialCharacter.cpp"
using namespace std;

int main()
{
    std::cout << "WELCOME TO THE GAME!\n";
	
	char menu;
	int charType;
	bool menuValid = false;
	Character* ch[5];
	int charIndex = 0, deleteIndex = -1;;
	string name="";
	do
	{
		std::cout << "----------------------------" << endl;
		std::cout << "Menu(press letter for operation)\n";
		std::cout << "\ta. Create new character";
		std::cout << "\n\tb. View all characters\n\tc. Delete a character";
		std::cout << "\n\td. Exit" << endl;
		std::cout << "----------------------------" << endl;
		do {
			std::cout << "choice: ";
			std::cin >> menu;
			std::cin.ignore(INT_MAX, '\n'); // Clear/flush out anything left in buffer.
										   // If we ARE in a fail state, this line will get ignored.
			if (std::cin.fail()) // Uh oh, our bad input created a stream fail.
			{
				std::cin.clear(); // Clear the error state.
				std::cin.ignore(INT_MAX, '\n'); // Clear/flush out anything left in buffer.
				std::cout << "Invalid input, try again." << endl;
			}
			else if (menu < 'a' && menu>'d') // Out of bounds.
				std::cout << "Invalid input! Try again." << endl;
			else
				menuValid = true;
		} while (menuValid != true);
		switch (menu)
		{
		case 'a':
			std::cout << "-------------------------------------------------\n";
			std::cout << "\tPlease select the type of your player :" << "\n";
			std::cout << "\t1. Human (has health=10, ability=hard, strong";
			std::cout << "\n\t2. Orcs(has health=15, ability=)";
			std::cout << "\n\t3.Undead"<< endl;
			std::cout << "-------------------------------------------------\n";
			std::cout<<"Player type: ";
			std::cin >> charType;
			std::cin.ignore(INT_MAX, '\n'); // Clear/flush out anything left in buffer.
										   // If we ARE in a fail state, this line will get ignored.
			std::cout << "\tPlease choose name for your player : ";
			//std::cin >> name;
			std::getline(std::cin, name);
			//std::cin.ignore(INT_MAX, '\n'); // Clear/flush out anything left in buffer.
										   // If we ARE in a fail state, this line will get ignored.
			switch (charType)
			{
			case 1:
				ch[charIndex] = new Humans(name);
				charIndex++;
				cout << "Added character!" << endl;
				break;
			case 2:
				break;
			case 3:
				break;
			
			}
			break;
		case 'b':
			std::cout << "-------------------------------------------------\n";
			std::cout << "All type of characters:\n";
			for (int i = 0; i < charIndex; i++)
			{
				cout << "ID "<<i<<endl;
				ch[i]->DisplayInfo();
			}
			break;
		case 'c':
			std::cout << "-------------------------------------------------\n";
			cout << "Enter index of character for delete: \n";
			cin >> deleteIndex;
			std::cin.ignore(INT_MAX, '\n'); // Clear/flush out anything left in buffer.
										   // If we ARE in a fail state, this line will get ignored.
			if (charIndex > deleteIndex)
			{
				for (int i = deleteIndex; i < charIndex; i++)
				{
					ch[deleteIndex] = ch[deleteIndex + 1];
				}
				charIndex--;

				//delete ch[deleteIndex];
				//ch[deleteIndex] = nullptr;
				cout << "Deleted successfully!" << endl;
			}
			
			break;
		}
	} while (menu != 'd');
}

