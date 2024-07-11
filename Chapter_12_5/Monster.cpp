#include <string>
#include <iostream>
#include "Monster.h"

Monster::Monster(Type type, const std::string &name, const std::string &roar, int health)
: m_type{type}, m_name{name}, m_roar{roar}, m_health{health}
{}

std::string Monster::getTypeString() const
{
    switch (m_type)
    {
    case Type::dragon   : return "Дракон";
    case Type::goblin   : return "Гоблин";
    case Type::ogre     : return "Огр";
    case Type::orc      : return "Орк";
    case Type::skeleton : return "Скелет";
    case Type::troll    : return "Троль";
    case Type::vampire  : return "Вампир";
    case Type::zombie   : return "Зомби";
    default             : return "???";
    }
}

void Monster::print()
{
    std::cout << "Тип: " 
            << getTypeString() 
            << "\nИмя: " 
            << m_name 
            << "\nНавык: " 
            << m_roar
            << "\nHP: "
            << m_health
            << '\n';
}