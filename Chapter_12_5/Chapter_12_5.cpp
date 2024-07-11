#include <iostream>
#include "Monster.h"
#include "MonsterGenerator.h"

int main()
{   
    Monster skeleton{MonsterGenerator::generateMonster()};
    skeleton.print();
    return 0;
}