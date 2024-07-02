#include <iostream>
#include <string>
#include "Header.h"

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