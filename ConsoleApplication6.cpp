#include <stdafx.h>
#include <iostream>
using namespace std;

int _tmain()
{
	double b = 2.345034;
	double c = b - (int)b;
	if (c > 0)
	{
		cout << "Число не целое";
	}
	else
	{
		cout << "Число целое";
	}
}