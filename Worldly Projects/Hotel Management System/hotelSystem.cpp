#include <iostream>
#include <time.h>
using namespace std;


// Functions Declarations
void quit(char name[]);
char customerName();

int main(){
	char custName[30];
	custName = customerName(*custName[30]);

	quit(custName);
	return 0;
}


/*
 * NAME INPUT
*/
char customerName(char &userName){
	cout << "Enter Your Name: " <<std::endl;
	cin >> userName;
	return userName;
}



/*
 * Order Receipt
*/
class Receipt{
	double total_bill;
	double order_number;

	time_t time_delivered;

	/* Method to print Order Sucess */
	void orderSuccess(){
		cout << "Thanks for making your order";
	}
}



/*
 * PIZZA
*/

class Pizza{
	public:
		char pizza_type[] ={"Pepperoni","Vegie","Chicago","Detroit","St. Louis","Neapolitian"};
		double pizza_price ={14.00, 14.00, 12.00,18.00,16.00,15.00};
		double price_per_size = {
		/* method to display pizza size */
		int pizzaSize(){
			cout << "Small size" <<endl;

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
void quit(char name[]){
	cout << "********************* Quiting *******************" <<std::endl;
	cout << " Thanks for visiting kwa Mathe " << std::endl;
	cout << "\t\t\t" << name << std::endl;
}
