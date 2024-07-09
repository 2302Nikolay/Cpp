#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Config.h"

int project_configuration::multiplierMin{2};
int project_configuration::multiplierMax{4};
int project_configuration::maximumWrongAnswer{4};

bool parseCmdLine(char* argv[], int size)
{       
        std::string help{
                "Usage: SquareGame [options]...\n"
                "Options:\n"
                "-h (--help) \t\t Выводит справку о программе и \n\t\t\tдоступные опциональные аргументы.\n"
                "-mMin <int> \t\t Устанавливает значение параметра \n\t\t\tmultiplierMin (минимальное значение для \n\t\t\tгенерации множителя).\n"
                "-mMax <int> \t\t Устанавливает значение параметра \n\t\t\tmultiplierMax (максимальное значение для \n\t\t\tгенерации множителя).\n"
                "-mWA <int> \t\t Устанавливает значение параметра \n\t\t\tmaximumWrongAnswer (максимальное значение для \n\t\t\t допустимых ошибок, при которых выводится \n\t\t\t подсказка)\n" 
            };

        std::vector<std::string> arg_par{};
        
        for (auto i{1}; i<size; ++i)
        {
            std::string str{argv[i]};
            arg_par.push_back(str);
        }

        for (auto args{0}; args<size; ++args)
        {
            if (arg_par[args] == "-h" | arg_par[args] == "--help")
            {
                std::cout << help;
                return false;
            }
            else if(arg_par[args] == "-mMin")
                project_configuration::multiplierMin = std::stoi(arg_par[args+1]);
            else if(arg_par[args] == "-mMax")
                project_configuration::multiplierMax = std::stoi(arg_par[args+1]);
            else if(arg_par[args] == "-mWA")
                project_configuration::maximumWrongAnswer = std::stoi(arg_par[args+1]);
        }

        if (project_configuration::multiplierMin < project_configuration::multiplierMax)
            return true;
        else
        {
            std::cout <<  "\x1b[31m Ошибка аргументов командной строки!\x1b[33m Параметр -mMin не должен быть больше либо равен -mMax. \x1b[0m \n";
            return false;
        }
} 