#include "Dice.h"

Dice::Dice()
{
	dice_six = std::uniform_int_distribution<int>(1, 6);
	dice_twelve = std::uniform_int_distribution<int>(1, 12);
}

Dice::~Dice()
{
}

int Dice::throw_dice_six()
{
	return dice_six(engine);
}

int Dice::throw_dice_twelve()
{
	return dice_twelve(engine);
}
