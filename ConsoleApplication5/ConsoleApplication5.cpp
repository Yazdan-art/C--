
#include <iostream>
using namespace std;
int main()
{
    float grade;
    cout << "enter grade of student";
    cin >> grade;
    if (grade <= 20 && grade >= 17)
        cout << "score=A";
    else if (grade < 17 && grade >= 15)
        cout << "score=B";
    else if (grade < 15 && grade >= 12)
        cout << "score=C";
    else
        cout << "student is fall";
    return 0;
}
