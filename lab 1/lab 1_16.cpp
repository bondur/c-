#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x = 3.2, A = 0;
    A = (2 * (pow(x, 4))) - (3 * pow(x, 3)) + (4 * pow(x, 2)) - (5 * x) + 6;
    printf("A = %f", A);
    return 0;
}
