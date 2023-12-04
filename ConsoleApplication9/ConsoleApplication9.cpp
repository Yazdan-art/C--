// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
/*	int a, s = 0, i = 1;
	float ave;
	while (i <= 10)
	{
		cout << "enter anumber\n";
		cin >> a;
		s = s + a;
		i++;
	}
	ave = s / 10;
	cout << "ave=" << ave;*/
	/*int s = 0, i = 1000;
	while (i <= 2000)
	{
		s = s + i;
		//cout << s << "\t";
		i = i + 2;
	}
	cout << "sum= \t" << s;
	return 0;*/



	/*float a, i = 1;
	float s=0;
	cin >> a;
	while (i <= a)
	{
		s = s + (1 / i);
		i++;
	}
	cout << s;
	return 0;*/
	int i = 1, n, max = 0;
	while (i <=20)
	{
		cout << "enter number\t";
		cin >> n;
		if (n > max)
			max = n;
		i++;
	}
	cout << "max is:\t" << max;
	return 0;
}


