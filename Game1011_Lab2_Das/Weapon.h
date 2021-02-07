#pragma once
#include <iostream>
using namespace std;
class Weapon
{
private:
	string m_name;
	string m_description;
	int m_damageValue;
	int current_no_of_ability;
	int max_no_of_ability;
public:
	string* m_abilities;
	string addAbility(string ability)
	{
		if (max_no_of_ability > current_no_of_ability)
		{
			m_abilities[current_no_of_ability] = ability;
			current_no_of_ability++;
			return "added ability";
		}
		return "failed to add ability";
	}
	ostream& operator<<(ostream& out)
	{
		out <<"Weapon name:"<< this->m_name<<"; description: "<<this->m_description<<"; damage value: "<<this->m_damageValue<<endl;
		/*for each (string var in m_abilities)
		{

		}*/
		return out;
	}
};

