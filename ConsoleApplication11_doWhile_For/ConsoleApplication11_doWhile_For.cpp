// ConsoleApplication11_doWhile_For.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
   /* int num, digit;
    cout << "enter anumber:";
    cin >> num;
    do
    {
        digit = num % 10;
        cout << digit;
        num = num / 10;
    } 
    while (num != 0);*/
 
  int magic, guess;
    char ans = 'y';
    magic = rand();
    do {
        cout << "enter number";
        cin >> guess;
        if (guess == magic)
        {
            cout << "wow its true";
            ans = 'n';
           
        }
        else
        {
            if (guess > magic)
                cout << "your number larger than magic";
            else
                cout << "your number lower than magic";
        }
        cout << "do you want continue?y/n";
        cin >> ans;
    } while (ans == 'y');
    return 0;

    //________________________________________
    //int i, sum = 0, n;
    //float ave;
    //for (i = 1;i <= 10;i++)
    //{
    //    cout << "enter number";
    //    cin >> n;
    //    sum += n;//sum=sum+n;
    //}
    //ave = sum / 10;
    //    cout << "ave=" << ave;
   //     return 0;

}

   
    

