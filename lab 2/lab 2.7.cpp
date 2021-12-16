#include <iostream>
int main()
{
	int A, B, C;
	std::cin >> A >> B >> C;
	std::cout << "A=" << A << " B=" << B << " C=" << C << "\n";
	if ((A % 2 == 0) || (B % 2 == 0) || (C % 2 == 0))
		printf("Есть хотя бы одно четное чило");
	else
		printf("нет четных чисел");
}