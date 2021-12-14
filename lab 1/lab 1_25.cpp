#include <iostream>

using namespace std;

int main()
{
    unsigned int c = 0;
    unsigned char x, y, z, u;
    cin >> x >> y >> z >> u;
    c = x;
    c = c << 8 | y;
    c = c << 8 | z;
    c = c << 8 | u;
    printf("\n%d(%x), %d(%x), %d(%x), %d(%x)", x, x, y, y, z, z, u, u);
    printf("\n%d(%x)", c, c);

    return 0;
}
