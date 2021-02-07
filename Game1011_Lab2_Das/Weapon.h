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
	Weapon() {
		m_damageValue = 0;
		current_no_of_ability = 0;
		max_no_of_ability = 5;
		m_abilities = new string[max_no_of_ability];
	}
	Weapon(string n, string des,int damage ) {
		m_name = n;
		m_description = des;
		m_damageValue = damage;
		current_no_of_ability = 0;
		max_no_of_ability = 5;
		m_abilities = new string[max_no_of_ability];
	}
	~Weapon() {
		delete[] m_abilities;
	}
	string GetName() { return m_name; }
	string GetDescription() { return m_description; }
	int GetDamage() { return m_damageValue; }
	int GetCurrentNoAbility() { return current_no_of_ability; }
	string* m_abilities;
	string addAbility(string ability);
	friend ostream& operator<<(ostream& out, Weapon& w);
	//ostream& operator<<(ostream& out)
	/*{
		out << "Weapon name:" << w.GetName() << "; description: " << w.GetDescription() << "; damage value: " << w.GetDamage() << endl;
		out << "Ablities: ";
		for (int i = 0; i < w.GetCurrentNoAbility() - 1; i++)
		{
			out << "[" << w.m_abilities[i] << "], ";
		}
		out << w.m_abilities[w.GetCurrentNoAbility() - 1] << "]" << endl;
		return out;
	}*/
};

