#pragma once
#include "Monster.h"

class MonsterGenerator
{
public:
    static int getRandomNumber(int min, int max);
    
    static Monster generateMonster();
};