#pragma once

//https://dnd.wizards.com/articles/features/character_sheets

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
};

struct Skills
{
	int acrobatics; //dexterity
};