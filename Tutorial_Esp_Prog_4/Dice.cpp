#include "Dice.h"

Dice::Dice()
{
	dice_six = std::uniform_int_distribution<int>(1, 6);
	dice_twelve = std::uniform_int_distribution<int>(1, 12);
	dice_select_obj = std::uniform_int_distribution<int>(1, 1);
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

int Dice::throw_dice_select_obj()
{
	return dice_select_obj(engine);
}

void Dice::change_dice_range(int lim_sup)
{
	dice_select_obj = std::uniform_int_distribution<int>(0, lim_sup - 1);
}
