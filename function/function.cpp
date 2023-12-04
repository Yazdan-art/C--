

#include <iostream>
using namespace std;
int prime(int);
int main()
{
	int num;
	char ans;
	while (1)
	{
		cout << "enter a number";
		cin >> num;
		if (prime(num)){cout << "addad aval ast";}
			
		else{cout << "addad aval nist";} 
			
		cout << "do you want to continue?y/n ";
		cin >> ans;
		if (ans != 'y')
			break;
	}
	return 0;
}
int prime(int num)
{
	int i, temp = 1;
	for (i = 2;i <= num / 2;i++)
	{
		if (num % i == 0)
			temp = 0;
	}
	return temp;

}

