#include "Character.h"
Character::Character(string name, int health, Weapon* w)
{
	m_name = name;
	m_healthValue = health;
	m_weapon = w;
}
Character::~Character()
{
	delete[] m_weapon;
}
void Character::SetName(string name)
{
	this->m_name = name;
}
string Character::GetName()
{
	return m_name;
}
void Character::SetHealthValue(int healthValue)
{
	this->m_healthValue = healthValue;
}
int Character::GetHealthValue()
{
	return m_healthValue;
}
void Character::SetWeapon(Weapon* weapon)
{
	this->m_weapon = weapon;
}
Weapon* Character::GetWeapon()
{
	return m_weapon;
}
