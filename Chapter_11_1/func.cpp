#include <iostream>

int factorial(int n)
{
    if (n <= 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int sumNum(int x)
{
    if (x < 10)
        return x;
    else
        return sumNum(x / 10) + x % 10;
}

void binaryRepres(unsigned int n)
{
    if (n > 1)
        binaryRepres(n/2);

    std::cout << n % 2;
}