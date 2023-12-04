// ConsoleApplicationFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void invert(void);
int main()
{
	invert();
/*	int num, count = 0, n = 0;
	while (1)
	{
		cout << "enter number:";
		cin >> num;
		if (num == 0)
			break;
		n++;
		if (num % 2 == 0)
			count++;

	}
	cout << "even:" << count << "odd:" << n - count;*/
	/*int done = 1;
	char ch;
	while (done)
	{
		cout << "enter character";
		cin >> ch;
		if (ch == '&')
		{
			done = 0;
			continue;
			
		}
		cout << "char=" << ch;
		cout << "next char=" << ch + 1;
	}*/
	/*int num1, num2;
	char op;
	cout << "enter operand";
	cin >> op;
	cout <<"enter num1, num2";
	cin >> num1 >> num2;
	switch (op)
	{
	case'+':
		cout << num1 << '+' << num2 << '=' << num1 + num2;
		break;
	case'-':
		cout << num1 << '-' << num2 << '=' << num1 - num2;
		break;
	case'*':
		cout << num1 << '*' << num2 << '=' << num1 * num2;
		break;
	case'/':
		cout << num1 << '/' << num2 << '=' << num1 / num2;
		break;
	default:
		cout << "eror";
	}*/

	return 0;
}
void invert(void)
{
	int h, m, s;
	long int second;
	cout << "enter time to hour,minute,second:";
	cin >> h>> m>> s;
	second = h * 3600 + m * 60 + s;
	cout << "hour to second=" << second;
}










