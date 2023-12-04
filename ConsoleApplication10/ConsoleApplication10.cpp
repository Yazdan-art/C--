// ConsoleApplication10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float a, i = 1, s=0;
	  cin >> a;
	  while (i <= a)
	  {
		  s = s + (1 / i);
		  i++;
	  }
	  cout << s;
	  return 0;
}

