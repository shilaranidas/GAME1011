#include "Weapon.h"
string Weapon::addAbility(string ability)
{
	if (max_no_of_ability > current_no_of_ability)
	{
		m_abilities[current_no_of_ability] = ability;
		current_no_of_ability++;
		return "added ability";
	}
	return "failed to add ability";
}

ostream& operator<<(ostream& out, Weapon& w)
{
	out << "Weapon name:" << w.GetName() << "; description: " << w.GetDescription() << "; damage value: " << w.GetDamage() << endl;
	out << "Ablities: ";
	for (int i = 0; i < w.GetCurrentNoAbility() - 1; i++)
	{
		out << "[" << w.m_abilities[i] << "], ";
	}
	out <<"["<< w.m_abilities[w.GetCurrentNoAbility() - 1] << "]" << endl;
	return out;
}
