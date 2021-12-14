#include <iostream>
int main() 
{
    int a, b, c, d, e, q, k, g, f,i,z,p,l;
    a = 2;  b = 13;  c = 7;  d = 19;  e = -4;
    i = b / a / c;
    q = b % e;
    f = d / a % c;
    z = 7 - d % +(3 - a);
    k = c % d - e;
    g = b % -e * c;
    p = -e % a + b / a-5 + 5;
    l = 9 / c- -20 / d;
    printf(" i=%d, q = %d, f = %d, z=%d, k = %d, g = %d,p = %d,l = %d ", i, q, f, z, k, g, p, l);
    return 0;
}