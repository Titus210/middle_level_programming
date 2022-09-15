#include <iostream>
using namespace std;
/*
   Using array to print week
   Initialize arrray from monday to sunday
   check and print number in array using index and pointer
*/
int main()
{
	const char *WEEK[] = {"Monday","Tuesday" , "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int day;

	cout << "Enter Day number to print day name:\n");
	cin >> day;

	if (day > 0 && day < 8)
		cout << " %d is on a : %c " << day << WEEK[day-1] << endl;
	else
		cout << "Enter a valid day" << endl;
	return 0;
}
