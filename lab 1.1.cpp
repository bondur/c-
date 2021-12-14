//1E6; 0xffffffL; 0731UL; 123456789LU; -5; +0xaf; OX0 -правильные ответы
#include <iostream>
int main()
{
	int a;
	a = 123456789LU; //вместо 123456789LU проверяем все числа по порядку
	printf("%d", a);
	return 0;
}