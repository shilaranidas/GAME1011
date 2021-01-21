#include "Achievement.h"
void Achievement::setTitle(string t)
{
	m_title = t;
}
void Achievement::setDescription(string d)
{
	m_description = d;
}
void Achievement::setScoreValue(int v)
{
	m_scoreValue = v;
}
void Achievement::achievementInfo() {

	cout << "\t\t\tTitle:" << m_title << "; Description:" << m_description << "; Score value:" << m_scoreValue << endl;
}
