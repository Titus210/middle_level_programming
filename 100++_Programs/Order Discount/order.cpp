#include <iostream>
using namespace std;

int noOfItems();
int main()
{

    int no_items = noOfItems();
    cout << no_items << endl;
}

/* method to get items */
int noOfItems()
{
    int no_items;
    cout << "Enter No of items to order: " << endl;
    cin >> no_items;
    return no_items;
}

/* Method to get price of each Item */

/* Calculate price of each item */

/* Get discount for each item*/

/* Total Shipping price */
