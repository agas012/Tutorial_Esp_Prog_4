#include "Interactions.h"

Interactions::Interactions()
{
}

Interactions::~Interactions()
{
}

void fight(Hero * ptrhero, Enemy * ptrenemy) //https://www.youtube.com/watch?v=qYD5HHKmVT8o
{
	Dice dices;
	int roll_result;

	//resolve attack
	float damage_hero = ptrhero->myStatus.attack_value - ptrenemy->myStatus.defence_value;
	float damage_enemy = ptrenemy->myStatus.attack_value - ptrhero->myStatus.current_defence_value;

	//resolve weapon (final version should be included in the original attack )
	if (ptrhero->weapon.weapon_type.compare(WeaponsTypes[0]) == 0) //if hero got a sword
	{
		if (ptrenemy->weapon.weapon_type.compare(WeaponsTypes[1]) == 0)
		{
			damage_hero = damage_hero - 3;
			damage_enemy = damage_enemy + 3;
		}
		if (ptrenemy->weapon.weapon_type.compare(WeaponsTypes[2]) == 0)
		{
			damage_hero = damage_hero + 3;
			damage_enemy = damage_enemy - 3;
		}
	}

	if (ptrhero->weapon.weapon_type.compare(WeaponsTypes[1]) == 0) //if hero got a sword
	{
		if (ptrenemy->weapon.weapon_type.compare(WeaponsTypes[0]) == 0)
		{
			damage_hero = damage_hero + 3;
			damage_enemy = damage_enemy - 3;
		}
		if (ptrenemy->weapon.weapon_type.compare(WeaponsTypes[2]) == 0)
		{
			damage_hero = damage_hero - 3;
			damage_enemy = damage_enemy + 3;
		}
	}

	if (ptrhero->weapon.weapon_type.compare(WeaponsTypes[2]) == 0) //if hero got a sword
	{
		if (ptrenemy->weapon.weapon_type.compare(WeaponsTypes[0]) == 0)
		{
			damage_hero = damage_hero - 3;
			damage_enemy = damage_enemy + 3;
		}
		if (ptrenemy->weapon.weapon_type.compare(WeaponsTypes[1]) == 0)
		{
			damage_hero = damage_hero + 3;
			damage_enemy = damage_enemy - 3;
		}
	}

	if(damage_hero>0)
	{
		roll_result = dices.throw_dice_six();
		if(roll_result < 3)
		{
			damage_hero = damage_hero - (damage_hero * 0.75); //damage_hero * 0.25
		}
		else if (roll_result>2 && roll_result < 5)
		{
			damage_hero = damage_hero;
		}
		else
		{
			damage_hero = damage_hero * 2; 
		}
		ptrenemy->myStatus.CurrentHitPoints = ptrenemy->myStatus.CurrentHitPoints - damage_hero;
	}

	if (damage_enemy > 0)
	{
		roll_result = dices.throw_dice_six();
		if (roll_result < 3)
		{
			damage_enemy = damage_enemy * 0.25;
		}
		else if (roll_result > 2 && roll_result < 5)
		{
			damage_enemy = damage_enemy;
		}
		else
		{
			damage_enemy = damage_enemy * 10;
		}
		ptrhero->myStatus.CurrentHitPoints = ptrhero->myStatus.CurrentHitPoints - damage_enemy;
	}
	else
	{
		ptrhero->myStatus.current_defence_value = ptrhero->myStatus.current_defence_value - (1.5* dices.throw_dice_six());
	}

	if (dices.throw_dice_twelve() > 8)
		ptrhero->myStatus.current_defence_value = ptrhero->myStatus.defence_value;
}