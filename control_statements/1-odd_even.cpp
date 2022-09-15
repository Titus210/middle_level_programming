#include <iostream>
using namespace std;
int main()
{
	int num, num1;
	cout << "Enter a number to check whether odd or even\n" << endl;
	cout >> num ;
	// Check if even
	if (num % 2 == 0)
		cout << "The number :" <<num<< " is even\n"<< num << endl;
	else
		cout << "The number :" <<num << "  is odd" << endl;
	// Using ternary operator
	cout << "Enter another number to check:\n"<< endl;
	cin >> num2;
	(num % 2 == 0) ? (cout << "THe number" <<num1<< " : is even\n") : (cout << "The number"<<num1 <<" is Odd ");
	cout << endl;
	return;
}
