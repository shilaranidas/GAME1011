#include "Platform.h"
Platform::Platform()
{
	games = new Game[5];
	max_no_of_game = 5;
	current_no_of_game = 0;
}
int Platform::getGameNo()
{
	return current_no_of_game;
}
void Platform::setName(string n)
{
	m_name = n;
}
void Platform::setManufacturer(string m)
{
	m_manufacturer = m;
}

Game Platform::getGameFrom(int index)
{
	if (index < max_no_of_game)
	return games[index];
}

void Platform::getAllGame()
{
	for (int i = 0; i < current_no_of_game; i++)
	{
		cout << "*****Game " << (i + 1) << "Information*****" << endl;
		games[i].gameInfo();
	}
}

string Platform::deleteGameAt(int index)
{
	if (current_no_of_game >= index)
		for (int i = index; i < current_no_of_game; i++)
		{
			games[current_no_of_game] = games[current_no_of_game + 1];
		}
	current_no_of_game--;
	return "deleteed game.";
}
string Platform::addGame(Game game)
{
	if (max_no_of_game > current_no_of_game)
	{		
		games[current_no_of_game] = game;
		current_no_of_game++;
		return "Added game";
	}
	return "add game failed";
}
void Platform::platformInfo() {
	cout << "Platform Information:" << endl;
	cout << "\tName:" << m_name << ";\tManufacturer:" << m_manufacturer << endl;
	/*for (int i = 0; i < current_no_of_game; i++)
	{
		cout << "*****Game " << (i + 1) << "Information*****" << endl;
		games[i].gameInfo();
	}*/
}
Platform::~Platform()
{
	if (current_no_of_game > 0)
	{
		delete[] games;
	}
}