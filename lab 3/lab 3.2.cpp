//Подсчитать количество натуральных чисел n(102  n  987), в которых все три цифры различны.
#include <iostream>
int main()
{
	for (int I = 102; i <= 987; i++) {
		tempCounter += (n % 10 == n / 10 % 10) ? 1 : 0;
		tempCounter += (n / 10 % 10 == n / 100 % 10) ? 1 : 0;
		tempCounter += (n % 10 == n / 100 % 10) ? 1 : 0;
		if (tempCounter == 0) counter++;
	}
}