#include <iostream>
#include "Game.h"
using namespace std;
class Platform
{
private:
	string m_name;
	string m_manufacturer;	
	Game* games;
	int current_no_of_game;
	int max_no_of_game;
public:
	void setName(string n);
	void setManufacturer(string m);
	void setMaxGameNo(int c);
	Game getGameFrom(int index);
	string updateGameAt(Game achiv, int index);
	string addGame(Game achiv);
	string deleteGameAt(int index);
	void platformInfo();
	~Platform();
};

