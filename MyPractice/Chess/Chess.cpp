
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello "<<endl;
    int p = 0, s = 0;
    int a = 1, b;
    cout << "Please enter the number of  contestants\n";
    cin >> p;
    while (a >= 1) {
        a = p / 2;
        s += a;
        b = p - (a * 2);
        p = a + b;

    }
   
    cout <<  "The total number of matches played is: " << s << endl;

    return 0;
}

 
 
  

   


 
   
