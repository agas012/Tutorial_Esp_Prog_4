#pragma once
#include "Types.h"
#include "Enemy.h"
#include "Weapons.h"

class Enemy;
class Hero
{
public:
	Hero();
	~Hero();
	CharacterSheet abilities;
	BasicValues myStatus;
	Weapons weapon;

	friend void fight(Hero* ptrhero, Enemy* ptrenemy);

private:
};

