//Определить, является ли натуральное число n степенью числа 3.
#include <iostream>
using namespace std;
int main()
{
	int n = 123;
	double temp = n;
	while (temp > 3) {
		temp /= 3
	}
	if (temp == 3) cout << "Натуральное число является степенью 3" << endl;
	else cout << "Натуральное число не является степенью 3" << endl;
}