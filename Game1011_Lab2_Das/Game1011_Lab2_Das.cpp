#include <iostream>
//#include "Character.h"
#include "SpecialCharacter.cpp"
using namespace std;
//ostream& operator<<(ostream& out, Weapon*& w)
//{
//	out << "Weapon name:" << w->GetName() << "; description: " << w->GetDescription() << "; damage value: " << w->GetDamage() << endl;
//	out << "Ablities: ";
//	/*for (int i = 0; i < w->GetCurrentNoAbility() - 1; i++)
//	{
//		out << "[" << w->m_abilities[i] << "], ";
//	}
//	out << w->m_abilities[w->GetCurrentNoAbility() - 1] << "]" << endl;*/
//	return out;
//}
int main()
{
    std::cout << "WELCOME TO THE GAME!\n";
	char menu;
	int charType;
	bool menuValid = false;
	Character* ch[5];
	int charIndex = 0;
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
			std::cout << "\tPlease select the type of your player :" << "\n";
			std::cout << "\t1. Human (has health=10, ability=hard, strong";
			std::cout << "\n\t2. Orcs(has health=15, ability=)\n\t3. Undead";
			std::cout << "\n\t4. Back to menu" << endl;
			std::cout<<"Player type: ";
			std::cin >> charType;
			std::cout << "\tPlease choose name for your player : ";
			std::cin >> name;

			switch (charType)
			{
			case 1:
				ch[charIndex] = new Humans(name);
				charIndex++;
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			}
			break;
		case 'b':
			for (int i = 0; i < charIndex; i++)
			{
				ch[i]->DisplayInfo();
			}
			break;
		case 'c':
			/*cout << "Enter index of achievement for detail: ";
			cin >> index;
			findAchievement = findGame.getAchievementFrom(index - 1);
			findAchievement.achievementInfo();*/
			break;
		}
	} while (menu != 'd');
}

