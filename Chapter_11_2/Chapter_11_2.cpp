#include <iostream>
#include <string>
#include <array>
#include <algorithm>

struct Student
{
    std::string name{};
    int points{};
};


int main()
{
    std::array<Student, 5> stud
    {{
        {"Nik", 2},
        {"Mike", 5},
        {"John", 3},
        {"Ann", 5},
        {"Rish", 5},
        }
    };

    const auto best
    {
        std::max_element(stud.begin(), stud.end(), [](const auto& a, const auto& b)
        {
            return (a.points < b.points);
        })
    };

    std::cout << best -> name << '\n';

    return 0;
}