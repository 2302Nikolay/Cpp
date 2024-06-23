#include <iostream>
#include <string>

enum class MonsterType
{
	dragon,
	orc,
	spider,
	slime,
	ogre,
};

struct Monster
{
	MonsterType type{};
	std::string name{};
	int health{};
};

std::string getType(MonsterType type)
{
	switch (type)
	{
	case MonsterType::dragon:
		return "Дракон";
	case MonsterType::orc:
		return "Орк";
	case MonsterType::spider:
		return "Паук";
	case MonsterType::slime:
		return "Слизь";
	case MonsterType::ogre:
		return "Огр";
	default:
		return "<Unnamed>";
	}
}

void printMonster(Monster monster)
{
	std::cout << "Монстр: " << '\t' << getType(monster.type) << '\n'
		<< "Имя: " << "\t\t" << monster.name << '\n'
		<< "Здоровье : " << '\t' << monster.health << "\n\n";
}

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