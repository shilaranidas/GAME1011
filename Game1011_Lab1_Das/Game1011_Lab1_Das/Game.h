#include "Achievement.h"
#include <iostream>
using namespace std;
class Game
{
private:
	string m_name;
	string m_publisher;
	string m_developer;
	//Achievement achievements[3];
	Achievement* achievements;
	int no_of_achievement;
public:
	void setName(string n);
	void setPublisher(string p);
	void setDeveloper(string d);
	void setAchievementNo(int c);
	void addAchievementAt(Achievement achiv, int index);
	void gameInfo();
	~Game();
};

