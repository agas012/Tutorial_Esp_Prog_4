#pragma once
#include "Types.h"
#include "Hero.h"
#include "Weapons.h"

class Hero;
class Enemy
{
public:
	Enemy();
	~Enemy();
	CharacterSheet abilities;
	BasicValues myStatus;
	Weapons weapon;

	friend void fight(Hero* ptrhero, Enemy* ptrenemy);

private:
};

