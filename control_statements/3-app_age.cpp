#include <iostream>
using namespace std;
/**
  Checks if user is between 13 to 18 years old if true returns correct authentication
   Rertus: 
	If greater than 18 prints older than 18
	if less than 13 prints younger than 13
*/

int main()
{
	int age;
	cout << "Please Enter your age" << endl;
	cin >> age;
	if (age > 18 )
		cout >> "Sorry! This app is only for users between 13 and 18 years" << endl;
	else if (age < 13)
		cout >> "Sorry! This app is only for users between 13 and 18 years" << endl;
	else
		cout >> " Thank you for signing in, wait a second as we redirect you to next page" << endl;
	return 0;
}
