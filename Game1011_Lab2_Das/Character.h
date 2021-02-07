#pragma once
#include <iostream>
#include "Weapon.h"
using namespace std;
class Character
{
	string m_name;
	int m_healthValue;
	Weapon m_weapon;
public:
	virtual void DisplayInfo() = 0; //pure virtual function
	void SetName(string name);
	
	string GetName();
	
	void SetHealthValue(int healthValue);
	
	int GetHealthValue();
	
	void SetWeapon(Weapon weapon);
	
	Weapon GetWeapon();
	
};

