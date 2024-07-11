#include <array>
#include "Monster.h"
#include "MonsterGenerator.h"

Monster MonsterGenerator::generateMonster()
{
    auto type{static_cast<Monster::Type>(getRandomNumber(0, static_cast<int>(Monster::Type::max_monster_types)-1))};
    int hp{getRandomNumber(1, 100)};
    static constexpr std::array names{ "Масса Костей",
                                        "Яглут", 
                                        "Матерь",
                                        "Эйктюр", 
                                        "Древний", 
                                        "Падший" };
    static constexpr std::array roars{ "*Нечувствительность к колющему урону*",
                                       "*Урон по площади*",
                                       "*Призыв мобов*",
                                       "*Дыхание льда*",
                                       "*Погибель Йотунов*",
                                       "*Ветви Экдрассиля*"
                                    };
    auto name{names[static_cast<std::size_t>(getRandomNumber(0, names.size()-1))]};
    auto roar{roars[static_cast<std::size_t>(getRandomNumber(0, roars.size()-1))]};

    return {type, name, roar, hp};

}

int MonsterGenerator::getRandomNumber(int min, int max)
{
    static constexpr double fraction{1.0 / (static_cast<double>(RAND_MAX) + 1.0)};
    return static_cast<int>(std::rand() * fraction * (max - min + 1) + min);
}