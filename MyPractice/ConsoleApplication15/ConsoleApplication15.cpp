#include <iostream>
using namespace std;
int main()
{
	//cout << "Hello Yazdan!\n";
	//int i = 1000, s = 0;
	//while (i < 1988) {
	//	i+=2;
	//	s += i;
	//	cout << "\n" << i;
	//}
	//cout << "\n" << s;

	//________________________________
	//int s = 0;
	//for (int i = 1002; i < 2000; i += 2) {
	//	
	//	
	//	s = s + i;
	//	cout << "\n" << i;
	//}cout << "\n" << s;

	//____________chees____________________
	int p = 0 ,s=0;
	int a=1,b;
    cout << "Please enter the number of  contestants";
	cin >> p;

	while (a >= 1) {
		a = p / 2;
		s += a;
		b = p - (a * 2);
		p = a + b;

	//}cout << s;
	//_____________________
	//int p, s = 0;
	//cout << "Please enter the number of contestants: ";
	//cin >> p;

	//for (int i = p; i > 1; i = (i + 1) / 2) {
	//	s += i / 2;
	//}

	//cout << "The total number of matches played is: " << s << endl;
	//__________________________________
	//int numContestants, totalMatches = 0;
	//cout << "Please enter the number of contestants: ";
	//cin >> numContestants;

	//do {
	//	totalMatches += numContestants / 2;
	//	numContestants = (numContestants + 1) / 2;
	//} while (numContestants > 1);

	//cout << "The total number of matches played is: " << totalMatches << endl;
	//________________________________
	//int numContestants, totalMatches = 0;
	//cout << "Please enter the number of contestants: ";
	//cin >> numContestants;

	//while (numContestants > 1) {
	//	if (numContestants % 2 == 0) {
	//		totalMatches += numContestants / 2;
	//		numContestants /= 2;
	//	}
	//	else {
	//		totalMatches += (numContestants - 1) / 2;
	//		numContestants = (numContestants - 1) / 2 + 1;
	//	}
	//}

	//cout << "The total number of matches played is: " << totalMatches << endl;
	return 0;
	

}

