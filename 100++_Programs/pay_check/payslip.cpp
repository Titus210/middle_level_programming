#include <iostream>
using namespace std;

//---------------------------------------
//	Global Variables
//	---------------------------------
float sales, base_salary, yearly_bonus, sales_bonus, paycheck, year_of_service;
const float less_than_five_rate = 10;
const float greater_than_five_rate = 20;
const float sales_bonus_rate_greater_10000 = 6/100;
const float sales_bonus_rate_greater_5000 = 3/100;

int main(){
	// get base salary
	cout << "Enter salesman base salary: " << endl;
	cin >> base_salary;
	// get no of years
	cout << "Please enter number of years: " << endl;
	cin >> year_of_service;
	// get sales
	cout << "Please enter sales made: " << endl;
	cin >> sales;
	// calculating bonus
	if (year_of_service <= 5)
		yearly_bonus = year_of_service * less_than_five_rate;
	else 
		yearly_bonus = year_of_service * less_than_five_rate;

	if (sales > 50000 && sales < 10000)
		sales_bonus = sales_bonus_rate_greater_5000 * sales;
	else if (sales > 10000)
		sales_bonus = sales_bonus_rate_greater_10000 * sales;
	else
		sales_bonus = 0;

	// calculate paycheck
	paycheck = yearly_bonus + sales_bonus + base_salary;

	// display paycheck
	cout << "The sales man earns total paycheck of " << paycheck;
}
