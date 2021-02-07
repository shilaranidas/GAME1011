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



//Humans::Humans(string name, int health, Weapon* w):Character(name,health,w)
//{
//	
//}


