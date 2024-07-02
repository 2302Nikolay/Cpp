#include <iostream>
#include "Header.h"

int main()
{
    setlocale(LC_ALL, "rus");

    Advertising ad{ getAdvertising() };
    printAdvertising(ad);

    return 0;
}