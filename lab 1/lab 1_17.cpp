#include <iostream>
int main()
{
    std::cout << "Enter a number: "; // просим пользователя ввести любое число
    int x = 0;
    std::cin >> x;
    int k;
if (x < 100) {
    printf("число x однозначное или двузначное\n");
}
else {
    k = x / 10 / 10 % 10;
    printf("k = %d\n", k);
    }
}