#include <vector>
#include "Dice.h"
#include "Hero.h"
#include "Enemy.h"

void main()
{
	Dice dices;
	Hero hero;
	std::vector<Enemy> enemies;

	//create enemies
	for (int i=0; i<5; i++)
	{
		Enemy enemy;
		enemies.push_back(enemy);
	}
}