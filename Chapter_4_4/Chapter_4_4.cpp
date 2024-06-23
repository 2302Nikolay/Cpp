#include "Header.h"
#include <iostream>

int main()
{	
	// Устанавливаем русскую локализацию
	setlocale(LC_ALL, "rus");
	
	// Получаем от пользователя значение высоты башни
	const double hight{ getHeight() };

	// Высчитываем расстояние до земли через определённое время
	getRes(hight, nul);
	getRes(hight, one);
	getRes(hight, two);
	getRes(hight, three);
	getRes(hight, four);
	getRes(hight, five);
	getRes(hight, six);
	getRes(hight, seven);
	getRes(hight, nine);
	getRes(hight, ten);

	return EXIT_SUCCESS;
}