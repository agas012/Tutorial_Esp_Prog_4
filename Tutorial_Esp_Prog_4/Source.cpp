#include <vector>
#include <iostream>
#include "Dice.h"
#include "Hero.h"
#include "Enemy.h"
#include "Weapons.h"
#include "Interactions.h"

void main()
{
	Dice dices;
	Hero hero;
	std::vector<Enemy> enemies;
	int id_enemy;
	int killcount = 0;

	//create 5 enemies put them into a vector
	for (int i=0; i<5; i++)
	{
		Enemy enemy;
		enemies.push_back(enemy);
	}

	while (enemies.size()>0)
	{
		dices.change_dice_range(enemies.size());
		id_enemy = dices.throw_dice_select_obj();
		fight(&hero, &enemies[id_enemy]);

		if (hero.myStatus.CurrentHitPoints <= 0)
			break;
		if(enemies[id_enemy].myStatus.CurrentHitPoints <= 0)
		{
			enemies.erase(enemies.begin() + id_enemy);
			killcount++;
		}
		if (dices.throw_dice_twelve() > 7)
		{
			Enemy enemy;
			enemies.push_back(enemy);
		}
	}
	std::cout << "Kill count = " << killcount << std::endl;
	std::cout << "Enemy count = " << enemies.size() << std::endl;
}