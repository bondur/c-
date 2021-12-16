//Подсчитать количество натуральных чисел n(11  n  999), являющихся палиндромами, и распечатать их.
#include <iostream>
using namespace std;
int main()
{
	for (int i = 102; i <= 987; i++) {
		if (i / 100 % 10 == i % 10) cout << i << endl;
	}
}