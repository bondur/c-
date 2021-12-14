//b). a = 2   c++ ; d). a = c++ + c; g). a = c += 1 + c;  - неверно составленные задачи
#include <iostream>
int main()
{
    int a, c;
    c = 5;

    //    c++;
    //    a = 2*c;

    //    c+=1;
    //    a = c+c;

    //    ++c;
    //    a = c+c;

    a = (c += 1) + c;

    printf("c = %d, a = %d", c, a);
    return 0;
}