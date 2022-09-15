#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number to check whether odd or even\n" << endl;
	cout >> num ;
	// Check if even
	if (num % 2 == 0)
		cout << "The number : %d is even\n"<< num << endl;
	else
		cout << "The number : %d is odd\n" << num << endl;
	// Using ternary operator
	cout << "Enter another number to check:\n"<< endl;
	cin >> num2;
	(num % 2 == 0) ? (cout << "THe number %d : is even\n" << num2) : (cout << "The number %d is Odd ");
	cout << endl;
	return;
}
