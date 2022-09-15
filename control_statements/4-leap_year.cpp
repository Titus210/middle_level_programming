#include <iostream>
using namespace std;
/**
  checking if year entered is a leap year
  Characteristics of leap year:
  	divided by 4 and not divisible by 100
	excactly divisible by 400
*/
int main()
{
	int year;

	cout << "Enter Year to check if leap year\n" << endl;
	cin >> year;
	((year % 4 == 0 &&  year % 100 != 0) || year % 400 == 0) ? (cout << " %d is a leap year" << year) : (cout <<"%d id not a leap year " << year );
	cout << endl;
	return 0;
}
