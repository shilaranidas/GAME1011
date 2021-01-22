#include "Game.h"
void Game::setName(string n)
{
	m_name = n;
}
void Game::setPublisher(string p)
{
	m_publisher = p;
}
void Game::setDeveloper(string d)
{
	m_developer = d;
}
//allocate max number
void Game::setMaxAchievementNo(int c)
{
	achievements = new Achievement[c];
	max_no_of_achievement = c;
}
Achievement Game::getAchievementFrom(int index)
{
	if(index<max_no_of_achievement)
		return achievements[index];	
}
string Game::updateAchievementAt(Achievement achiv, int index)
{	
	achievements[index] = achiv;
	return "updateded achievement";
}
string Game::addAchievement(Achievement achiv)
{
	if (max_no_of_achievement > current_no_of_achievement)
	{
		current_no_of_achievement++;
		achievements[current_no_of_achievement] = achiv;
		return "Added achievement";
	}
	return "add achievement failed";
}
string Game::deleteAchievementAt(int index)
{
	if (current_no_of_achievement >= index)
		for (int i = index; i < current_no_of_achievement; i++)
		{
			achievements[current_no_of_achievement] = achievements[current_no_of_achievement+1];
		}	
	current_no_of_achievement--;
	return "deleted achievement";
}
void Game::gameInfo() {	
	cout << "\t\tName:" << m_name << ";\tPublisher:" << m_publisher << ";\tDeveloper:" << m_developer << endl;
	for (int i = 0; i < current_no_of_achievement; i++)
	{
		cout << "**********Achievement " << (i + 1) << "Information**********" << endl;
		achievements[i].achievementInfo();
	}
}
Game::~Game()
{
	if (current_no_of_achievement > 0)
	{
		delete[] achievements;
	}
}
