#include <iostream>
#include <time.h>
using namespace std;

// Functions Declarations
void quit(char name[]);
char customerName();

int main()
{
	char custName[30];
	custName = customerName(*custName[30]);

	quit(custName);
	return 0;
}

/*
 * NAME INPUT
 */
char customerName(char &userName)
{
	cout << "Enter Your Name: " << std::endl;
	cin >> userName;
	return userName;
}

/*
 * Order Receipt
 */
class Receipt
{
	double total_bill;
	double order_number;

	time_t time_delivered;

	/* Method to print Order Sucess */
	void orderSuccess()
	{
		cout << "Thanks for making your order";
	}
}

/*
 * PIZZA
 */

class Pizza
{
public:
	// variable declarations
	char pizza_types[] = {"Pepperoni", "Veggie", "Chicago", "Detroit", "St. Louis", "Neapolitian"};
	double pizza_price = {14.00, 17.00, 12.00, 18.00, 16.00, 15.00};
	double percentage_per_size = {0.0, 0.2, 0.35, 0.4} // percentage price for small, medium, large, xl
	double price_per_size;
	int choice_size, choice;
	char pizza_type;

	/* Display pizza  */
	void pizzaMenu()
	{
		cout << "Choose Pizza size" << endl;
		for (int i = 0; i < pizza_type.size(); i++)
		{
			cout << i << ". "<< pizza_type[i] << endl;
		}
		cin >> choice;
		switch (choice)
		{
		case 0:
			pizzaSize();
			break;
		case 1:
			smallPrice();
		case 2:
			mediumPrice();
		case 3:
			largePrice();
		case 4:
			xLargePrice();
		default:
			cout << "Choose Right size" << endl;
			pizzaSize();
		}
	}
	/* method to display pizza size */
	void pizzaSize()
	{
		do
		{
			cout << "Choose Pizza size" << endl;
			cout << "*************************" << endl;
			cout << "1. Small " << endl;
			cout << "2. Medium " << endl;
			cout << "3. Large " << endl;
			cout << "4. Extra Large " << endl;
		} while (choice != 5 || choice != 0);

		switch (choice)
		{
		case 1:
			pizzaSize();
			break;
		case 2:
			smallPrice();
		case 3:
			mediumPrice();
		case 4:
			largePrice();
		case 5:
			xLargePrice();
		default:
			cout << "Choose Right size" << endl;
			pizzaSize();
		}
	}


}

/*
 * BURGER
 */

/*
 * SANDWICH
 */

/*
 * OTHERS
 */

/*
 * ORDER CONFIRMATION
 */

/*
 * RECEIPT
 */

/*
 * MAIN MENU
 */

/*
 * FOOD MENU
 */

/*
 * QUIT
 */
void
quit(char name[])
{
	cout << "********************* Quiting *******************" << std::endl;
	cout << " Thanks for visiting kwa Mathe " << std::endl;
	cout << "\t\t\t" << name << std::endl;
}
