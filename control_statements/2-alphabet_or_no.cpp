#include <iostream>
using namespace std;
int main()
{
	char  char1;
	cout << "Enter a character \n";
	cin char1;
	(char1 >= 'a' && char1 <= 'z' || char1 >= 'A' && char1 <= 'Z') ? (cout << char1 << " is an alphabet " ) : ( cout << char1 << " is not an Alphabet ");
	return 0
}

