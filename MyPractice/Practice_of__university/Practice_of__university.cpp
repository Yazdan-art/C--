#include <iostream>
using namespace std;
int prime(int);

int main()
{
	char ans;
	int num;
	while (1) {

		cout << "please enter number  \n";
		cin >> num;
		if (prime(num)) {
			cout << "your number is prime\n" ;
		}
		else {
			cout << "your number isn't prime\n";
		}
		cout << "Do you want to continue ? y/n  \n";
			cin >> ans;
			if (ans == 'n')
		{
				break;
			}
			 else if(ans == 'y') {
				continue;
			}
		
		
	}

}

int prime(int num)
{
	int temp = 1;
	for (int i = 2;i <= num / 2;i++)
	{
		if (num % i==0) {
			temp = 0;
		}
	
	}
	return temp;
}
