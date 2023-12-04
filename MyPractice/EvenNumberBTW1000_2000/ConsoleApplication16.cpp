
#include <iostream>
#include <conio.h>
using namespace std;

int prim(int a,int b ,  int sum);
int main()
{
	int a, b, sum=0;
   cout << "enter the smaller number\n";
   cin >> a;
   cout << "enter the bigger number\n";
   cin >> b;
   prim(a+2,b,sum);

}



int prim(int a, int b,int sum)
{
	for (a; a < b; a += 2) {
		cout << a << endl;
		sum += a;
}
	cout << sum<<"\n\n\n\n\n";

	return 0;
}
