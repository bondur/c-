//a). E1 op= E2		и		E1 = E1 op E2 - выражение не эквивалентны
#include <iostream>
int main() 
{
	int a, b, c;
	b = 6, c = 5;
	//c*=2+b;
	c = c * (2 + b);
	printf("%d", c);
	return 0;
}