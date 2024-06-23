#include <iostream>
#include "header.h"

int main()
{
	// Локализация, чтобы отображался русский текст в консоли
	setlocale(LC_ALL, "rus");
	
	// Получаем числа от пользователя 
	double firstNum{ getNum() };
	double secondNum{ getNum() };

	// Получаем от пользователя оператор
	char ch{ getChar() };

	// Высчитываем результта операции и выводим в консоль
	getRes(firstNum, secondNum, ch);

	return EXIT_SUCCESS;
}