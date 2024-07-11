#pragma once
#include <string>

class Monster
{
public:
    enum class Type
    {
        dragon,
        goblin,
        ogre,
        orc,
        skeleton,
        troll,
        vampire,
        zombie,
        max_monster_types
    };
private:
    Type m_type;
    std::string m_name;
    std::string m_roar;
    int m_health;
public:
    Monster(Type type, const std::string &name, const std::string &roar, int health);

    std::string getTypeString() const;

    void print();
};