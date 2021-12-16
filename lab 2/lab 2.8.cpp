//Даны три числа.Вывести на экран те из них, которые принадлежат заданному отрезку[e, f].
#include <iostream>
int main()
{
	int a, b, c, e, f;
	std::cin >> a >> b >> c;
	std::cin >> e >> f;
	if (a < f && a > e) {
		std::cout << a << " ";
	}
	if (b < f && b > e) {
		std::cout << b << " ";
	}
	if (c < f && c > e) {
		std::cout << c << " ";
	}
	return 0;
}