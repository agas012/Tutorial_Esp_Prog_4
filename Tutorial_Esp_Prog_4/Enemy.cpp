#include "Enemy.h"

Enemy::Enemy()
{
	abilities.strength = 30;
	abilities.charisma = 10;
	abilities.constitution = 50;
	abilities.dexterity = 30;
	abilities.inteligence = 1;
	abilities.wisdow = 1;
	myStatus.MaxHitPoints = .20 * abilities.strength + .60 * abilities.constitution;
	myStatus.CurrentHitPoints = myStatus.MaxHitPoints;
	myStatus.attack_value = (abilities.strength * 0.1f) + (abilities.dexterity * 0.1f);
	myStatus.defence_value = (abilities.constitution * 0.1f) + (abilities.dexterity * 0.1f);
	myStatus.current_defence_value = myStatus.defence_value;
	weapon.get_weapon();
}

Enemy::~Enemy()
{
}
