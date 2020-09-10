#include <vector>
#include "Dice.h"
#include "Hero.h"
#include "Enemy.h"

void main()
{
	Dice dices;
	Hero hero;
	std::vector<Enemy> enemies;
	int id_enemy;

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
	}
}