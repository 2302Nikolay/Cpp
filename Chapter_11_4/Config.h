#ifndef CONF_H
#define CONF_H

#include <vector>
#include <string>

namespace project_configuration
{
    /// @brief Минимальное значение для генерации множителя
    static int multiplierMin{ 2 };
    /// @brief Максимальное значение для генерации множетеля
    static int multiplierMax{ 4 };
    /// @brief Допустимая ошибка для подсказки
    static int maximumWrongAnswer{ 4 };
}

bool parseCmdLine(std::vector<std::string>& cmdargs_array, const char *argv[], int size);

#endif