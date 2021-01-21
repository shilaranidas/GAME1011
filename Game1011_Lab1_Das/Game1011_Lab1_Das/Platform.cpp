#include "Platform.h"
void Platform::setName(string n)
{
	m_name = n;
}
void Platform::setManufacturer(string m)
{
	m_manufacturer = m;
}
void Platform::setGames(int c)
{
	games = new Game[c];
	no_of_game = c;
}
void Platform::platformInfo() {
	cout << "Platform Information:" << endl;
	cout << "\tName:" << m_name << "; Manufacturer:" << m_manufacturer << endl;
	for (int i = 0; i < no_of_game; i++)
	{
		cout << "\tGame " << (i + 1) << "Information:" << endl;
		games[i].gameInfo();
	}
}