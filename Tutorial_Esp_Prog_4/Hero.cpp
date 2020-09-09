#include "Hero.h"

Hero::Hero()
{
	myHero.strength = 30;
	myHero.charisma = 10;
	myHero.constitution = 50;
	myHero.dexterity = 30;
	myHero.inteligence = 1;
	myHero.wisdow = 1;
	myStatus.MaxHitPoints = .20 * myHero.strength + .60 * myHero.constitution;
	myStatus.CurrentHitPoints = myStatus.MaxHitPoints;
}

Hero::~Hero()
{
}
