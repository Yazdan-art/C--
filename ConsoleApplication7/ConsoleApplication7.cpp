
// ConsoleApplication2.cpp 
 
//int main()
//{
//	int x, y, z;
//	float ave;
//	cout << "enter two numer";
//	cin >> x >> y;
//	z = x + y;
//	ave = z / 2;
//	cout << "ave:" << ave;
//	getch()
//}

// ConsoleApplication3.cpp 
 
//using namespace std;
//int main()
//{
//	cout << "Hello World!\n";
//	int x, y, z;
//	float ave;
//	cout << "enter two numer";
//	cin >> x >> y;
//	z = x + y;
//	ave = z / 2;
//	cout << "ave:" << ave;
//	_getch();
//	return 0;
//}

// ConsoleApplication4.cpp  
 
//int main()
//{
//	int n;
//	cin >> n;
//	if (n % 2 == 0)
//
//		cout << "number is even";
//
//	else
//		cout << "number is odd";
//	return 0;
//}


// ConsoleApplication5.cpp  
 
//int main()
//{
//    float grade;
//    cout << "enter grade of student";
//    cin >> grade;
//    if (grade <= 20 && grade >= 17)
//        cout << "score=A";
//    else if (grade < 17 && grade >= 15)
//        cout << "score=B";
//    else if (grade < 15 && grade >= 12)
//        cout << "score=C";
//    else
//        cout << "student is fall";
//    return 0;
//}



//// ConsoleApplication6.cpp  
 
//int main()
//{
//	int x, y;
//	cout << "enter 2number";
//	cin >> x >> y;
//	if (x > y)
//		cout << "number1 larger than number 2";
//	else
//		cout << "number2 larger than number 1";
//	return 0;
//
//}

// ConsoleApplication7.cpp 
 
//int main()
//{
//	int x, y, z;
//	cout << "enter 3number";
//	cin >> x >> y >> z;
//	if (x > y && x > z)
//		cout << x<<" is max";
//	else if (y > x && y > z)
//		cout << y <<"is max";
//	else
//		cout << z<<" is max";
//	return 0;
//}

// ConsoleApplication8.cpp 
//Ctrl+K, Ctrl+F  /////Ctrl+K, Ctrl+c my favorite shortcut
 
//int main()
//{
//	int x, y, z;
//	cout << "please enter 3 numbers\n" << endl << "\t";
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
// ConsoleApplication9.cpp  
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
		cout << "ave=" << ave;
		*/
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
	while (i <= 20)
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