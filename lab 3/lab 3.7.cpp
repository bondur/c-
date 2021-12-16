//Для данного вещественного положительного числа a найти наименьшее натуральное положительное n такое, что 1 + 1 / 2 + 1 / 3 + ... + 1 / n > a.
#include <iostream>
using namespace std;
int main()
{
	int a = I, I = 1;
	double sum = 0;
		while(sum <= a) {
		sum += (double)1 / I;
		I++;
	}
	cout << sum;
}