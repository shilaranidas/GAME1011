#pragma once
#include <iostream>
#include "Weapon.h"
using namespace std;
class Character
{
	string m_name;
	int m_healthValue;
	Weapon* m_weapon;
public:
	Character(){
		m_healthValue = 0;
		m_weapon = new Weapon();
	}
	Character(string name, int health, Weapon* w);
	~Character();
	virtual void DisplayInfo() = 0; //pure virtual function
	void SetName(string name);
	
	string GetName();
	
	void SetHealthValue(int healthValue);
	
	int GetHealthValue();
	
	void SetWeapon(Weapon* weapon);
	
	Weapon* GetWeapon();
	
};

