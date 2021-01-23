// Game1011_Lab1_Das.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Platforms.h"
//#include "Platform.h"
//#include "Game.h"
//#include "Achievement.h"
//#include "Platform.cpp"
using namespace std;
int main()
{
	std::cout << "\t\t\t\tINFORMATION about platforms, games and achievements" << endl;	
	int mainmenu;
	char menu,submenu;
	string value;
	int score,index;
	int gameSize, achievSize;
	bool mainmenuValid = false,menuValid=false, submenuValid=false;
	//bool valid = false, submenuValid = false, submenu2Valid = false;
	Platform addPlatform, updatePlatform, findPlatform;
	Game addgame, updateGame, findGame;
	Achievement achievementObj, findAchievement;
	//Game* findgamesPlatform;
	Platforms platforms;
	do {		
		std:: cout << "----------------------------" << endl;
		std::cout << "mainmenu(press number for operation)\n";
		std::cout << "\t1. get current no of platform";
		std::cout << "\n\t2. Add platform\n\t3. Select platform\n\t4. Select all platform";
		std::cout<<"\n\t5. delete platform\n\t6. Quit mainmenu" << endl;
		std::cout << "----------------------------" << endl;
		do{
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
			else if (mainmenu<1&&mainmenu>7) // Out of bounds.
				std::cout << "Invalid input! Try again." << endl;
			else
				mainmenuValid = true;
		} while (mainmenuValid != true);
		
		switch (mainmenu) 
		{
		case 1:
			cout <<"\tCurrent no of platform :"<< platforms.getPlatformNo()<<"\n";
			break;
		case 2:			
			cout << "Enter information about Platform : " << endl;
			cout << "Platform Name: ";
			cin >> value;
			addPlatform.setName(value);
			cout << "Platform Manufacturer: ";
			cin >> value;
			addPlatform.setManufacturer(value);
			platforms.addPlatform(addPlatform);
			break;
		case 3:
			cout << "Enter index of platform for detail: ";
			cin >> index;
			findPlatform = platforms.getPlatformFrom(index - 1);
			findPlatform.platformInfo();
			
			do
			{
				std::cout << "----------------------------" << endl;
				std::cout << "menu(press small letter for operation)\n";
				std::cout << "\ta. get current no of game";
				std::cout << "\n\tb. Add game\n\tc. Select game\n\td. Select all game";
				std::cout << "\n\te. delete game\n\tf. back to main menu" << endl;
				std::cout << "----------------------------" << endl;
				do {
					std::cout << "choice(menu): ";
					std::cin >> menu;
					std::cin.ignore(INT_MAX, '\n'); // Clear/flush out anything left in buffer.
												   // If we ARE in a fail state, this line will get ignored.
					if (std::cin.fail()) // Uh oh, our bad input created a stream fail.
					{
						std::cin.clear(); // Clear the error state.
						std::cin.ignore(INT_MAX, '\n'); // Clear/flush out anything left in buffer.
						std::cout << "Invalid input, try again." << endl;
					}
					else if (menu < 'a' && menu>'f') // Out of bounds.
						std::cout << "Invalid input! Try again." << endl;
					else
						menuValid = true;
				} while (menuValid != true);
				switch (menu)
				{
				case 'a':					
					cout << "\tCurrent no of game of this platform:" << findPlatform.getGameNo() << "\n";
					break;
				case 'b':
					cout << "Enter information about Game : " << endl;
					cout << "\tGame Name: ";
					cin >> value;
					addgame.setName(value);					
					cout << "\tGame Publisher: ";
					cin >> value;
					addgame.setPublisher(value);
					cout << "\tGame Developer: ";
					cin >> value;
					addgame.setDeveloper(value);
					findPlatform.addGame(addgame);
					break;
				case 'c':
					cout << "Enter index of game for detail: ";
					cin >> index;
					findGame = findPlatform.getGameFrom(index - 1);
					findGame.gameInfo();



					do
					{
						std::cout << "----------------------------" << endl;
						std::cout << "submenu(press Capital letter for operation)\n";
						std::cout << "\tA. get current no of achievement";
						std::cout << "\n\tB. Add achievement\n\tC. Select achievement\n\tD. Select all achievement";
						std::cout << "\n\tE. delete achievement\n\tF. back to menu" << endl;
						std::cout << "----------------------------" << endl;
						do {
							std::cout << "choice(submenu): ";
							std::cin >> submenu;
							std::cin.ignore(INT_MAX, '\n'); // Clear/flush out anything left in buffer.
														   // If we ARE in a fail state, this line will get ignored.
							if (std::cin.fail()) // Uh oh, our bad input created a stream fail.
							{
								std::cin.clear(); // Clear the error state.
								std::cin.ignore(INT_MAX, '\n'); // Clear/flush out anything left in buffer.
								std::cout << "Invalid input, try again." << endl;
							}
							else if (submenu < 'A' && submenu>'F') // Out of bounds.
								std::cout << "Invalid input! Try again." << endl;
							else
								submenuValid = true;
						} while (submenuValid != true);
						switch (submenu)
						{
						case 'A':
							cout << "\tCurrent no of achievement of this game:" << findGame.getAchievementNo() << "\n";
							break;
						case 'B':
							cout << "Enter information about Achievement : " << endl;
							cout << "\t\tAchievement Title: ";
							cin >> value;
							achievementObj.setTitle(value);
							cout << "\t\tAchievement Description: ";	
							cin >> value;
							achievementObj.setDescription(value);
							cout << "\t\tAchievement Score Value: ";
							cin >> score;
							achievementObj.setScoreValue(score);
							findGame.addAchievement(achievementObj);
							break;
						case 'C':
							cout << "Enter index of achievement for detail: ";
							cin >> index;
							findAchievement = findGame.getAchievementFrom(index - 1);
							findAchievement.achievementInfo();
							break;
						case 'D':
							findGame.getAllAchievement();
							break;
						case 'E':
							cout << "Enter index of achievement for delete: ";
							cin >> index;
							cout << findGame.deleteAchievementAt(index - 1);
							break;
						}
					} while (submenu != 'F');

					break;
				case 'd':
					findPlatform.getAllGame();
					break;
				case 'e':
					cout << "Enter index of game for delete: ";
					cin >> index;
					cout << findPlatform.deleteGameAt(index-1);
					break;
				}
			} while (menu!= 'f');
			break;
		case 4:
			platforms.getAllPlatform();
			break;		
		case 5:
			cout << "Enter index of platform for delete: ";
			cin >> index;
			cout<< platforms.deletePlatformAt(index-1);			
			break;		
		}						
	} while (mainmenu!=6);
}

