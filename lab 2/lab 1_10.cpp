//Выбрать наибольшее из трёх заданных чисел.
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a > b) && (a > c))
		cout << "Наибольшее число: " << a;
	if ((b > a) && (b > c))
		cout << "Наибольшее число: " << b;
	if ((c > a) && (c > b))
		cout << "Наибольшее число: " << c;
}