#include <iostream>
using namespace std;


// Functions Declarations
void quit(char name[]);

int main(){
	char name[30];
	cout << "Enter Your Name: " <<std::endl;
	cin >> name;

	quit(name);
	return 0;
}

/*
 * NAME INPUT
*/


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
