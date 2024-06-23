#include <iostream>
#include "Header.h"

double getHeight()
{
	std::cout << "Введите высоту башни >>";

	double hight{};
	std::cin >> hight;

	return hight;
}

double calcHeight(double height, int time)
{
	double highStart{ (g_force * (time * time)) / 2.0};
	double highRes{ height - highStart };

	return highRes;

}

void printRes(double hight, int time)
{
	if (hight > 0.0)
		std::cout << "На " << time << " секунде был на высоте " << hight << " метров.\n";
	else 
		std::cout << "На " << time << " секунде был на земле.\n";
}

void getRes(double height, int time)
{
	double heightRes{ calcHeight(height, time) };
	printRes(heightRes, time);
}