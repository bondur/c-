#include <iostream>

int main()
{
    std::cout << "Enter a number: "; // просим пользователя ввести любое число
    int x = 0;
    std::cin >> x;
    int k;
    k += x % 10;
    x /= 10;
    for (int i; i < 2; i++)
    {
        k = k * 10 + x % 10;
        x /= 10;
    }
    std::cout << k << std::endl;
}