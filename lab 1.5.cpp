﻿//c). c -= 1  a = c % 2;e). a = c -= 1/2; - неверно составленные задачи
#include <iostream>
int main()
{
    int a, c;
    c = 5;

    //    --c;
    //    a = c/2;

    //    a = --c/2;

    //    a = c--/2;

    //    a = (c = c - 1)/2;

    a = (c -= 1) / 2;


    printf("c = %d, a = %d", c, a);
    return 0;
}