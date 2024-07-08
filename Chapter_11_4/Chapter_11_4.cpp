#include <iostream>
#include <sstream>
#include <string>
#include "Header.h"
#include "Config.h"

int main(int argc, char *argv[])
{
    if (argc > 1)
	{
        std::vector<std::string> arg_par{};
        
        for (int i{1}; i<argc; ++i)
        {
            std::stringstream convert{argv[i]};
            std::string str{};
            if (!(convert >> str))
                return 1;
            arg_par.push_back(str);

        }

        for (size_t i{0}; i <= arg_par.size(); ++i)
        {
            std::string help{
                "Usage: SquareGame [options]...\n"
                "Options:\n"
                "-h (--help) \t\t\t Выводит справку о программе и \n\t\t\tдоступные опциональные аргументы.\n"
                "-mMin <int> \t\t Устанавливает значение параметра \n\t\t\tmultiplierMin (минимальное значение для \n\t\t\tгенерации множителя).\n"
                "-mMax <int> \t\t Устанавливает значение параметра \n\t\t\tmultiplierMax (максимальное значение для \n\t\t\tгенерации множителя).\n"
                "-mWA <int> \t\t Устанавливает значение параметра \n\t\t\tmaximumWrongAnswer (максимальное значение для \n\t\t\t допустимых ошибок, при которых выводится \n\t\t\t подсказка)\n" 
            };
            if (arg_par[i] == "-h" | arg_par[i] == "--help")
                std::cout << help;
            else if(arg_par[i] == "-mMin")
            {
                project_configuration::multiplierMin = std::stoi(arg_par[i+1]);
            }
            else if(arg_par[i] == "-mMax")
            {
                project_configuration::multiplierMax = std::stoi(arg_par[i+1]);
            }
            else if(arg_par[i] == "-mWA")
            {
                project_configuration::maximumWrongAnswer = std::stoi(arg_par[i+1]);
            }
            
        }

    }
    

    // Для отображения текста на русском языке
    setlocale(LC_ALL, "rus");

    std::cout << project_configuration::multiplierMin;
    // Получения от пользователя количества чисел и начала диапазона
    std::pair<int, int> pair{getUserNumbers()};
    // Генерация массива "правильных ответов"
    std::vector<int> array{generateNum(pair.first, pair.second, generateRandomNum(project_configuration::multiplierMin, project_configuration::multiplierMax))};  

   while (play(array))
   {
   }
   
    return 0;
}