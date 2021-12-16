//Определить, верно ли, что куб суммы цифр натурального числа n равен n2.
#include <iostream>
using namespace std;
int main()
{
	int sum = 0, n = 123, sqrN = n * n;
	while(n) {
		sum += n % 10;
		N/= 10;
	}
	if (sum * sum * sum == sqrN) cout << “Куб суммы равен n в квадрате” << endl;
	
	else cout << “Куб суммы не равен n в квадрате” << endl;
}