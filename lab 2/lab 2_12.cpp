//Написать программу, которая запрашивает у пользователя номер дня недели и выводит одно из сообщений : «Увы – рабочий день!», 
//«Ура!Суббота!», «Ура!Воскресенье!».
#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Номер дня недели:\n";
    cin >> day;
    switch (day)
    {
    case 1: cout << "Увы - рабочий день!";
        break;
    case 2: cout << "Увы - рабочий день!";
        break;
    case 3: cout << "Увы - рабочий день!";
        break;
    case 4: cout << "Увы - рабочий день!";
        break;
    case 5: cout << "Увы - рабочий день!";
        break;
    case 6: cout << "Ура!суббота!";
        break;
    case 7: cout << "Ура!воскресенье!";
        break;
    default: cout << "Такого дня  не существует";
    }
}
