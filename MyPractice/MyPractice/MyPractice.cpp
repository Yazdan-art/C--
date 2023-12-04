#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    float r;
    float s;
    float p;
    cin >> r;
    p = 2 * r * 3.14;
    s = r * r * 3.14;

    cout << "مساحت دایره با شعاع " << r << " برابر است با " << s << endl;
    cout << "محیط دایره با شعاع " << r << " برابر است با " << p << endl;
    return 0;
}


