#include "Platform.h"
void Platform::setName(string n)
{
	m_name = n;
}
void Platform::setManufacturer(string m)
{
	m_manufacturer = m;
}
void Platform::setMaxGameNo(int c)
{
	games = new Game[c];
	max_no_of_game = c;
}
Game Platform::getGameFrom(int index)
{
	if (index < max_no_of_game)
	return games[index];
}
string Platform::updateGameAt(Game game, int index)
{
	games[index] = game;
	return "updateded game.";
}
string Platform::deleteGameAt(int index)
{
	if (current_no_of_game >= index)
		for (int i = index; i < current_no_of_game; i++)
		{
			games[current_no_of_game] = games[current_no_of_game + 1];
		}
	current_no_of_game--;
	return "deleteded game.";
}
string Platform::addGame(Game game)
{
	if (max_no_of_game > current_no_of_game)
	{
		current_no_of_game++;
		games[current_no_of_game] = game;
		return "Added game";
	}
	return "add game failed";
}
void Platform::platformInfo() {
	cout << "Platform Information:" << endl;
	cout << "\tName:" << m_name << ";\tManufacturer:" << m_manufacturer << endl;
	for (int i = 0; i < current_no_of_game; i++)
	{
		cout << "*****Game " << (i + 1) << "Information*****" << endl;
		games[i].gameInfo();
	}
}
Platform::~Platform()
{
	if (current_no_of_game > 0)
	{
		delete[] games;
	}
}