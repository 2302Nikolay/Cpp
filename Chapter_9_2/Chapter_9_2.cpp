#include "Header.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Monster dragon{ MonsterType::dragon, "Матерь", 1000 };
	Monster slime{ MonsterType::slime, "Масса Костей", 500 };
	Monster spider{ MonsterType::spider, "Яглут", 800 };

	printMonster(dragon);
	printMonster(slime);
	printMonster(spider);

	return EXIT_SUCCESS;
}