#include <iostream>
#include <sstream>
#include <string>
#include "Header.h"
#include "Config.h"

int main(int argc, char *argv[])
{
    
    // Для отображения текста на русском языке
    setlocale(LC_ALL, "rus");
    
    if (argc > 1)
	{

        if (!parseCmdLine(argv, argc))
            return 0;

        // Получения от пользователя количества чисел и начала диапазона
        std::pair<int, int> pair{getUserNumbers()};
        // Генерация массива "правильных ответов"
        std::vector<int> array{generateNum(pair.first, pair.second, generateRandomNum(project_configuration::multiplierMin, project_configuration::multiplierMax))};  

        while (play(array))
        {
            ;
        }
    }
    else
    {
        // Получения от пользователя количества чисел и начала диапазона
        std::pair<int, int> pair{getUserNumbers()};
        // Генерация массива "правильных ответов"
        std::vector<int> array{generateNum(pair.first, pair.second, generateRandomNum(project_configuration::multiplierMin, project_configuration::multiplierMax))};  

        while (play(array))
        {
            ;
        }
    }
    
    return 0;
}