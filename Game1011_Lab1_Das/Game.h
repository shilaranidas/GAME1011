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
	int current_no_of_achievement;
	int max_no_of_achievement;
public:
	Game();
	Achievement* achievements;
	void setName(string n);
	void setPublisher(string p);
	void setDeveloper(string d);
	int getAchievementNo();
	Achievement getAchievementFrom(int index);
	void getAllAchievement();
	string addAchievement(Achievement achiv);
	string deleteAchievementAt(int index);
	void gameInfo();
	~Game();
};

