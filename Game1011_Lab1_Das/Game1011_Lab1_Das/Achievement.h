#include <iostream>
using namespace std;
class Achievement
{
private:
	string m_title;
	string m_description;
	int m_scoreValue;
public:
	void setTitle(string t);
	void setDescription(string d);
	void setScoreValue(int v);
	void achievementInfo();
};

