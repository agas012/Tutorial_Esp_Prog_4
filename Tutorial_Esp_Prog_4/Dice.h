#pragma once
#include <random>

class Dice
{
public:
	Dice();
	~Dice();
	//dice throws functions
	int throw_dice_six();
	int throw_dice_twelve();
	int throw_dice_select_obj();
	//change dice range
	void change_dice_range(int lim_sup);

private:
	//main random device
	//https://cpppatterns.com/patterns/choose-random-element.html
	std::random_device random_device;
	std::mt19937 engine{ random_device() };

	//random dices
	std::uniform_int_distribution<int> dice_six;
	std::uniform_int_distribution<int> dice_twelve;
	std::uniform_int_distribution<int> dice_select_obj;
};

