#include <iostream>
#include "Header.h"

int main()
{
	setlocale(LC_ALL, "rus");
	int x{ readNumber() };
	int y{ readNumber() };
	writeAnswer(x + y);
	return EXIT_SUCCESS;
}