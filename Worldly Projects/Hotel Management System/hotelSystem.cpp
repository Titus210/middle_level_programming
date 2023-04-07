#include <iostream>
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
 * PIZZA
*/


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
