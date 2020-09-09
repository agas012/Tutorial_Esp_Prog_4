#include "Enemy.h"

Enemy::Enemy()
{
	myEnemy.strength = 30;
	myEnemy.charisma = 10;
	myEnemy.constitution = 50;
	myEnemy.dexterity = 30;
	myEnemy.inteligence = 1;
	myEnemy.wisdow = 1;
	myStatus.MaxHitPoints = .20 * myEnemy.strength + .60 * myEnemy.constitution;
	myStatus.CurrentHitPoints = myStatus.MaxHitPoints;
}

Enemy::~Enemy()
{
}
