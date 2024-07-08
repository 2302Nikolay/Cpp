#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Config.h"

void parseCmdLine(std::vector<std::string>& cmdargs_array, const char *argv[], int size)
{
        for (int i{1}; i<size; ++i)
        {
            std::stringstream convert{argv[i]};
            std::string str{};
            if (!(convert >> str))
                ;
            cmdargs_array.push_back(str);
        }
} 