#ifndef HEADER_H
#define HEADER_H

/// @brief Отражает информацию о рекламе
struct Advertising
{
    /// @brief Количество показанной рекламы
    int adsShown{};

    /// @brief Количество кликов на рекламу
    double clickThroughRatePercentage{};

    /// @brief Средний заработок с одного клика
    double averageEarningsPerClick{};
};

/// @brief Получает от пользователя количество показанной за сегодня рекламы,
/// на какой процент рекламы нажимают пользователи и средний доход за один клик по рекламе.
/// @return Полученные от пользователя значения в виде рекламы
Advertising getAdvertising();

/// @brief Печатает число показанной рекламы, количество кликов, средний доход за клик 
///и полный доход.
/// @param ad Структура, отражающая параметры рекламы
void printAdvertising(Advertising ad);

#endif