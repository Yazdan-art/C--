// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ctrl+K, Ctrl+F  /////Ctrl+K, Ctrl+c my favorite shortcut

#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "please enter 3 numbers\n"<<endl<<"\t";
	cin >> x >> y >> z;
	if (x > y && x > z)
	{
		cout << (x + y + z) / 3;
	}
	else if (y > x && y > z) {
		if (y - (2 * (y / 2)) == 0) {
			cout << "the second number ,y, is an even number.";
		}
		else
			cout << "the second number ,y, is an odd number.";
	}
	else if (z > y && z > x) {
		cout << "the third condition is correct:" << (x + y) / 2;
	}
	else
		cout << "please try again with differnt numbers " ;
	return 0;
}


//
//#include <iostream>
////#include <windows.h>
//using namespace std;
//int main()
//{
//	//SetConsoleOutputCP(CP_UTF8);
//	int x, y, z;
//	cout << "please enter 3 numbers\n";
//	cin >> x >> y >> z;
//	if (x > y && x > z)
//	{
//		cout << (x + y + z) / 3;
//	}
//	else if (y > x && y > z) {
//		if (y - (2 * (y / 2)) == 0) {
//			cout << "the second number ,y, is an even number.";
//		}
//		else
//			cout << "the second number ,y, is an odd number.";
//	}
//	else if (z > y && z > x) {
//		cout << "the third condition is correct:" << (x + y) / 2;
//	}
//	else
//		cout << "please try again with differnt numbers ";
//	return 0;
//}
