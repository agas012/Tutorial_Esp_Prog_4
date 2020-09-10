#include "Interactions.h"

Interactions::Interactions()
{
}

Interactions::~Interactions()
{
}

void fight(Hero * ptrhero, Enemy * ptrenemy)
{
	Dice dices;
	int roll_result;

	//resolve attack
	float damage_hero = ptrhero->myStatus.attack_value - ptrenemy->myStatus.defence_value;
	float damage_enemy = ptrenemy->myStatus.attack_value - ptrhero->myStatus.defence_value;

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
	}

	ptrhero->myStatus.CurrentHitPoints = ptrhero->myStatus.CurrentHitPoints - damage_enemy;
	ptrenemy->myStatus.CurrentHitPoints = ptrenemy->myStatus.CurrentHitPoints - damage_hero;
}