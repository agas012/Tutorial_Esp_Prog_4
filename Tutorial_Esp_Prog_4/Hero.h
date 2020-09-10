#pragma once
#include "Types.h"
#include "Enemy.h"

class Enemy;
class Hero
{
public:
	Hero();
	~Hero();
	CharacterSheet myHero;
	BasicValues myStatus;
	friend void fight(Hero* ptrhero, Enemy* ptrenemy);

private:
};

