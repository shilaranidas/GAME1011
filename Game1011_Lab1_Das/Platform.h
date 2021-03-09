#include <iostream>
#include "Game.h"
using namespace std;
class Platform
{
private:
	string m_name;
	string m_manufacturer;	
	
	int current_no_of_game;
	int max_no_of_game;
public:
	Game* games;
	Platform();
	int getGameNo();
	void setName(string n);
	void setManufacturer(string m);	
	Game getGameFrom(int index);	
	void getAllGame();
	string addGame(Game achiv);
	string deleteGameAt(int index);
	void platformInfo();
	~Platform();
};

