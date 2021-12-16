//Подсчитать количество цифр в десятичной записи целого неотрицательного числа n.
#include <iostream>
int main()
{
	int counter = 0, n = 123;
	while (n != 0) {
		n /= 10;
		counter++;
	}
}