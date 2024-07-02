#include <iostream>
#include "Header.h"

Advertising getAdvertising()
{
    Advertising temp{};
    std::cout << "Сколько рекламы показано сегодня? >> ";
    std::cin >> temp.adsShown;
    std::cout << "На какой процент объявлений нажимали пользователи? >> ";
    std::cin >> temp.clickThroughRatePercentage;
    std::cout << "Сколько в среднем зарабатываете на каждом клике? >> ";
    std::cin >> temp.averageEarningsPerClick;
    return temp;
}

void printAdvertising(Advertising ad)
{
    std::cout << "Число показанной рекламы: " << ad.adsShown << '\n';
    std::cout << "Количество кликов: " << ad.clickThroughRatePercentage << '\n';
    std::cout << "Средний доход за клик: $" << ad.averageEarningsPerClick << '\n';
    std::cout << "Полный доход: $" <<
        (ad.adsShown * ad.clickThroughRatePercentage / 100 * ad.averageEarningsPerClick) << '\n';
}
