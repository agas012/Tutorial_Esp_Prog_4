#pragma once
#include <string>
#include "Dice.h"
#include "Types.h"

class Weapons
{
public:
	Weapons();
	~Weapons();
	
	void get_weapon();
	void mod_weapon();

	std::string weapon_type;
	WeaponValues values;
private:

};

