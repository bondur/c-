//Вычислить значение  i!для i, изменяющихся от 1 до n.Воспользоваться соотношением  i!= 1 + 12 + 123 + ... + 123..
//.n = 1 + 2(1 + 3(1 + +n(1)...)).
#include <iostream>
using namespace std;
int main()
{
	int k= 1, n;
	for (int i = 1; i <= n; I++) {
		i += k * i;
	}
	cout << k << endl;
}