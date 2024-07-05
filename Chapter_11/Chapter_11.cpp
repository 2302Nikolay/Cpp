#include <iostream>
#include <utility>
#include <functional>

using ArithmeticFunction = std::function<int(std::pair<int, int>)>;

int add(std::pair<int, int> num)
{
    return num.first + num.second;
}

int substract(std::pair<int, int> num)
{
    return num.first - num.second;
}

int multiply(std::pair<int, int> num)
{
    return num.first * num.second;
}

int division(std::pair<int, int> num)
{
    return num.first / num.second;
}

ArithmeticFunction getArithmeticFunction(char oper)
{
    switch (oper)
    {
    case '+':
        return &add;
    case '-':
        return &substract;
    case '*':
        return &multiply;
    case '/':
        return &division;
    default:
        {
            std::cout << "getArithmeticFunction(): Ошибка выбора операции. Вызвана функция по умолчанию: add()\n";
            return &add;
        }
    }
}


std::pair<int, int> getNum()
{
    std::pair<int, int> value_pair{0, 0};

    std::cout << "Введите первое число >> ";
    std::cin >> value_pair.first;
    std::cout << "Введите второе число >> ";
    std::cin >> value_pair.second;
    
    return value_pair;
}

char getOper()
{
    bool flag{true};
    char ch{};

    while (flag)
    {
        std::cout << "Введите операцию [+, -, *, /] >> ";
        std::cin >> ch;

        if (ch=='+' || ch=='-' || ch=='*' || ch=='/')
            flag = false;
        else
            std::cout << "Ошибка! Неправильный символ операции!\n";
    }

    return ch;
    
}

int main()
{
    std::pair<int, int> num{getNum()};

    char oper{getOper()};

    //ArithmeticFunction af{getArithmeticFunction(oper)};
    ArithmeticFunction af{getArithmeticFunction('?')};

    std::cout << "Результат: " << af(num) << '\n';

    return 0;
}