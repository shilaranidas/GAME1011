#include "Platform.h"
void Platform::setName(string n)
{
	m_name = n;
}
void Platform::setManufacturer(string m)
{
	m_manufacturer = m;
}
void Platform::setGameNo(int c)
{
	games = new Game[c];
	no_of_game = c;
}
void Platform::addGameAt(Game game, int index)
{
	games[index] = game;
}
void Platform::platformInfo() {
	cout << "Platform Information:" << endl;
	cout << "\tName:" << m_name << ";\tManufacturer:" << m_manufacturer << endl;
	for (int i = 0; i < no_of_game; i++)
	{
		cout << "\tGame " << (i + 1) << "Information:" << endl;
		games[i].gameInfo();
	}
}