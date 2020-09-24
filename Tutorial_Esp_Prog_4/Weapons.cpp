#include "Weapons.h"

std::string WeaponsTypes[3] = { "sword", "bow", "wand" };

Weapons::Weapons()
{
}

Weapons::~Weapons()
{
}

void Weapons::get_weapon()
{
	Dice dices;
	int roll_result;
	roll_result = dices.throw_dice_six();
	if (roll_result < 3)
	{
		weapon_type = WeaponsTypes[0];
		values.Damage = 10;
		values.Defense = 4;
		values.magic = 1;
	}
	else if (roll_result > 2 && roll_result < 5)
	{
		weapon_type = WeaponsTypes[1];
		values.Damage = 8;
		values.Defense = 2;
		values.magic = 3;
	}
	else
	{
		weapon_type = WeaponsTypes[2];
		values.Damage = 0;
		values.Defense = 0;
		values.magic = 20;
	}
	mod_weapon();
}

void Weapons::mod_weapon()
{
	Dice dices;
	values.Damage = values.Damage + dices.throw_dice_six();
	values.Defense = values.Defense + dices.throw_dice_six();
	values.magic = values.magic + dices.throw_dice_six();
}
