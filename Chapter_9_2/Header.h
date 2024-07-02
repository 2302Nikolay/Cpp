#ifndef HEADER_H
#define HEADER_H

#include <string>
/// @brief Перечисление видов монстров
enum class MonsterType
{
    /// @brief Дракон
    dragon,
	/// @brief Орк
	orc,
	/// @brief Паук
	spider,
	/// @brief Слизь
	slime,
	/// @brief Огр
	ogre,
};

/// @brief Структура, представляющая отдельного монстра
struct Monster
{
    /// @brief Тип монстра
    MonsterType type{};
	/// @brief Имя монстра
	std::string name{};
	/// @brief Количство здоровья
	int health{};
};

/// @brief Приводит вид моснтра из перечисления к строке с названием вида
/// @param type Вид-перечисление монстров
/// @return Вид монстра строкой
std::string getType(MonsterType type);

/// @brief Печатает параметры и характеристики монстра
/// @param monster Структура типа Monster
void printMonster(Monster monster);

#endif