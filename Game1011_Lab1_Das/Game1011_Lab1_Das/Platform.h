#include <iostream>
#include "Game.h"
using namespace std;
class Platform
{
private:
	string m_name;
	string m_manufacturer;	
	Game* games;
	int no_of_game;
public:
	void setName(string n);
	void setManufacturer(string m);
	void setGames(int c);
	void platformInfo();
};
