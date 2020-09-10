#pragma once
#include "Types.h"
#include "Hero.h"

class Enemy
{
public:
	Enemy();
	~Enemy();
	CharacterSheet myEnemy;
	BasicValues myStatus;
	friend void fight(Hero* ptrhero, Enemy* ptrenemy);

private:
};

