#include <iostream>
using namespace std;

/*----------------------------------------------*/
	// global variables
/*---------------------------------------------*/
float total_sales_tax, total_amount, selling_price, city_tax, state_tax, luxury_tax;
const float cityTaxRate = 1.5/100;
const float stateTaxRate = 4/100;
const float luxuryTaxRate = 10/100;
bool isLuxury;
int choice;
//----------------------------------------------


int main(){

	// get user selling price
	cout << "Enter the selling price: ";
	cin >> selling_price;
	// ask if luxury
	cout << "Is Item Luxury?\n1. Yes:\n2. No: \n";
	cin >> choice;
	if (choice == 1)
		isLuxury = true;
	else
		isLuxury = false;

	// calculate cityTax
	city_tax = selling_price * cityTaxRate;

	// calculate stateTax
	state_tax = selling_price * stateTaxRate;

	// calculate luxuryTax
	if(selling_price > 50000 && isLuxury)
		luxury_tax = luxuryTaxRate * selling_price;
	else
		luxury_tax = 0.0;

	// calculate  Total salesTax
	total_sales_tax = city_tax + state_tax + luxury_tax;
	// calculate TotalAmount
	total_amount = selling_price + total_sales_tax;

	// display total amount
	cout << "The total amount to pay for " << selling_price << " worth of items is "<< total_amount <<endl;

	return 0;
}
