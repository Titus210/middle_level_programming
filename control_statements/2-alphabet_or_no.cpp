#include <iostream>
using namespace std;
int main()
{
	char  char1;
	cout << "Enter a character \n";
	cin char1;
	(char1 >= 'a' && char1 <= 'z' || char1 >= 'A' && char1 <= 'Z') ? (cout << "%c is an alphabet " << char1) : ( cout << "%c is not an Alphabet ");
	return 0
}

