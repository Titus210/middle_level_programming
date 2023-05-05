#include <iostream>
using namespace std;

int noOfItems();
void getPrice(int *no_items, double *price);
void getDiscount(double *price, double *discount, int *no_items);
void shippingFee(double *discount, double *price, double *shipping_fee);
int main()
{
    int i;
    double price = 0.0, discount = 0.0, shipping_fee = 0;

    // prompt user to enter number of items to order
    int no_items = noOfItems();

    // get price for all items
    getPrice(&no_items, &price);

    // get discount for all items
    getDiscount(&price, &discount, &no_items);

    // get all shipping fee
    shippingFee(&discount, &price, &shipping_fee);

    // print receipt
    cout << "Payment receipt" << endl;
    cout << "Items ordered: " << no_items << endl;
    cout << "Shipping fee: " << discount << endl;
    cout << "Total fee: " << shipping_fee << endl;
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
/* Get discount for each item*/
void getDiscount(double *price, double *discount, int *no_items)
{

    if (*(price) > 200)
        *discount = 0;

    else
    {
        *discount = *no_items * 10;
    }
}

/* Total Shipping price */
void shippingFee(double *discount, double *price, double *shipping_fee)
{
    *shipping_fee = *discount + *price;
}