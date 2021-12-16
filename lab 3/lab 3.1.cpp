//Подсчитать количество натуральных чисел n(111  n  999), в записи которых есть
//а) две одинаковые цифры;
#include <iostream>
int main()
{
	int counter = 0;
	for (int n = 111; n <= 999; i++) {
		if ((n % 10 == n / 10 % 10) || (n % 10 == n / 100 % 10) || (n / 10 % 10 == n / 100 % 10) counter += 1;
	}
}
/*b) только две одинаковые цифры.
int counter = 0;
for (int n = 111, tempCounter = 0; n <= 999; i++) {
	tempCounter += (n % 10 == n / 10 % 10) ? 1 : 0;
	tempCounter += (n / 10 % 10 == n / 100 % 10) ? 1 : 0;
	tempCounter += (n % 10 == n / 100 % 10) ? 1 : 0;
	if (tempCounter == 2) counter++;
} */