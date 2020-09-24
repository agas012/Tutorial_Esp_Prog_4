#pragma once
#include <string>
#include <vector>

//https://dnd.wizards.com/articles/features/character_sheets

//Strength, measuring physical power
//Dexterity, measuring agility
//Constitution, measuring endurance
//Intelligence, measuring reasoningand memory
//Wisdom, measuring Perceptionand Insight
//Charisma, measuring force of personality

struct CharacterSheet //saving throws
{
	int strength;
	int dexterity;
	int constitution;
	int inteligence;
	int wisdow;
	int charisma;
};

struct BasicValues
{
	int MaxHitPoints;
	int CurrentHitPoints;
	float attack_value;
	float defence_value;
	float current_defence_value;
};

struct Skills
{
	int acrobatics; //dexterity
};

struct WeaponValues
{
	float Damage;
	float Defense;
	float magic;
};

extern std::string WeaponsTypes[3];

