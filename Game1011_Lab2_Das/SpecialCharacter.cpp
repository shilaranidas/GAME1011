#include "Character.h"
using namespace std;
class Humans : public Character
{

public:
	Humans(string name) {
		this->SetName(name);
		this->SetHealthValue(10);
		Weapon* w = new Weapon("sword", "a bladed melee weapon intended for cutting", 30);
		w->addAbility("hard enough to hold an edge along a length which can range from 18 in (46 cm) to more than 36 in (91 cm)");
		w->addAbility("strong enough and flexible enough that it can absorb massive shocks at just about any point along its length and not crack or break");
		this->SetWeapon(w);
	}
	//Humans(string name, int health, Weapon* w);
	~Humans() {
		this->SetWeapon(nullptr);
	}
	virtual void DisplayInfo()
	{
		cout << "\nHuman player Name: " << this->GetName() << "; health: " << this->GetHealthValue() << ";"<<endl;
		Weapon* w = this->GetWeapon();
		cout << *w;
	}
};
class Orcs : public Character
{

public:
	Orcs(string name) {
		this->SetName(name);
		this->SetHealthValue(10);
		Weapon* w = new Weapon("curved swords", "the best swords (and other war gear) and that Elvish swords glowed blue in the presence of Orcs.", 20);
		w->addAbility("fast swing speeds");
		w->addAbility("decent damage");
		w->addAbility("range");
		w->addAbility("a excellent roll-catching");
		this->SetWeapon(w);
	}
	//Humans(string name, int health, Weapon* w);
	~Orcs() {
		this->SetWeapon(nullptr);
	}
	virtual void DisplayInfo()
	{
		cout << "\nOrcs player Name: " << this->GetName() << "; health: " << this->GetHealthValue() << ";" << endl;
		Weapon* w = this->GetWeapon();
		cout << *w;
	}
};
class Undead : public Character
{

public:
	Undead(string name) {
		this->SetName(name);
		this->SetHealthValue(10);
		Weapon* w = new Weapon("Axe", "one-handed melee weapon that can require investment in the Axe Mastery or Energy Storage ", 10);
		w->addAbility("93.67% Lucky Strike damage each");
		w->addAbility("Gulen Rockfire");
		w->addAbility("Returns to user's hand once thrown");
		this->SetWeapon(w);
	}
	//Humans(string name, int health, Weapon* w);
	~Undead() {
		this->SetWeapon(nullptr);
	}
	virtual void DisplayInfo()
	{
		cout << "\nUndead player Name: " << this->GetName() << "; health: " << this->GetHealthValue() << ";" << endl;
		Weapon* w = this->GetWeapon();
		cout << *w;
	}
};



//Humans::Humans(string name, int health, Weapon* w):Character(name,health,w)
//{
//	
//}


