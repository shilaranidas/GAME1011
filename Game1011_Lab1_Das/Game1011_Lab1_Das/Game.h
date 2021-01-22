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
	int current_no_of_achievement;
	int max_no_of_achievement;
public:
	void setName(string n);
	void setPublisher(string p);
	void setDeveloper(string d);
	void setMaxAchievementNo(int c);
	Achievement getAchievementFrom(int index);
	string addAchievement(Achievement achiv);
	string updateAchievementAt(Achievement achiv, int index);
	string deleteAchievementAt(int index);
	void gameInfo();
	~Game();
};

