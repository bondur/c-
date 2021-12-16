//Написать программу, которая после ввода с клавиатуры числа(в диапазоне от 1 до 999), обозначает денежную единицу,
//дописывая слово «рубль» в правильной форме.Например, 12 рублей, 21 рубль и т.д.
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Введите число от 1 до 999: ";
    cin >> x;
    switch (x % 10)
    {
    case 0:cout << x << " рублей";
        break;
    case 1:cout << x << " рубль";
        break;
    case 2:cout << x << " рубля";
        break;
    case 3:cout << x << " рубля";
        break;
    case 4:cout << x << " рубля";
        break;
    case 5:cout << x << " рублей";
        break;
    case 6:cout << x << " рублей";
        break;
    case 7:cout << x << " рублей";
        break;
    case 8:cout << x << " рублей";
        break;
    case 9:cout << x << " рублей";
        break;
    }
}
