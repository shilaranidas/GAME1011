// Game1011_Lab1_Das.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Platform.h"
using namespace std;
int main()
{
	Platform myPlatform;
	string value;
	int score;
	int gameSize, achievSize;
	cout << "Enter information about Platform : " << endl;
	cout << "Platform Name: ";
	cin >> value;
	myPlatform.setName(value);
	cout << "Platform Manufacturer: ";
	cin >> value;
	myPlatform.setManufacturer(value);
	cout << "How many numbers of game for this platform? ";
	cin >> gameSize;
	myPlatform.setGames(gameSize);
	for (int i = 0; i < gameSize; i++)
	{
		cout << "Enter information about Game " << (i + 1) << " for this platform: " << endl;
		Game gameObj;
		cout << "\tGame Name: ";
		cin >> value;
		gameObj.setName(value);
		cout << "\tGame Publisher: ";
		cin >> value;
		gameObj.setPublisher(value);
		cout << "\tGame Developer: ";
		cin >> value;
		gameObj.setDeveloper(value);
		cout << "\tHow many numbers of achievement for this game? ";
		cin >> achievSize;
		gameObj.setAchievements(achievSize);
		for (int j = 0; j < achievSize; j++)
		{
			cout << "Enter information about Achivement " << (j + 1) << " of game" << (i + 1) << ": ";
			Achievement achievementObj;
			cout << "\t\tAchievement Title: ";
			cin >> value;
			achievementObj.setTitle(value);
			cout << "\t\tAchievement Description: ";
			cin >> value;
			achievementObj.setDescription(value);
			cout << "\t\tAchievement Score Value: ";
			cin >> score;
			achievementObj.setScoreValue(score);
		}
		

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
