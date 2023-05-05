#include <iostream>
using namespace std;

int noOfItems();
void getPrice( int *no_items, double *price);

int main()
{
    int i;
    double price = 0.0;

    // prompt user to enter number of items to order
    int no_items = noOfItems();
    cout << no_items << endl;

    // get price for all items
    getPrice(&no_items, &price);
    cout << price << endl;

    return 0;
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
/* Method to get price of each Item */
void getPrice(int *no_items, double *price)
{
    double item_price;
    for (int i = 0; i < *no_items; i++)
    {
        cout << "Enter Price for Item " << i + 1 << endl;
        cin >> item_price;
        *price += item_price;
    }
}
/* Calculate price of each item */

/* Get discount for each item*/

/* Total Shipping price */
