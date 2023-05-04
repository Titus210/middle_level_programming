#include <iostream>
#include <string>
using namespace std;

/**
 * @file hotelManagement.cpp
 * @author Titus Kiplagat
 * @brief
 * @version 0.1
 * @date 2023-05-02
 *
 * @copyright Copyright (c) 2023
 *
 */

/**
 * Class Pizza
 * Sub classes ["Pepperoni", "Veggie", "Chicago", "Detroit", "St. Louis", "Neapolitian"]
 * @details Attributes
 * name
 * price
 * size
 * quantity
 * availability
 * price
 *
 * @details Methods
 * getPrice()
 * getQuantity()
 * getAvailability()
 * getSize()
 */

class Pizza
{
private:
    string pizzaName;
    string size;
    int pizza_quantity;
    bool pizza_availability;
    double price;
    double totalPrice;

public:
    Pizza(string pizza_name, string pizza_size, double pizza_price)
    {
        pizzaName = pizza_name;
        size = pizza_size;
        price = pizza_price;
    }
    void getPizzaInfo()
    {
        cout << "Pizza Name: " << pizzaName << endl;
        cout << "Pizza Size: " << size << endl;
        cout << "Pizza Quantity: " << pizza_quantity << endl;
        cout << "Pizza Availability: " << pizza_availability << endl;
        cout << "Pizza price: " << price << endl;
    }
    void increaseQuantity()
    {
        pizza_quantity++;
    }
    void decreaseQuantity()
    {
        if (pizza_quantity > 0) // decrease only when pizza is greater than 0
            pizza_quantity--;
    }

};

/*  Sub classes ["Pepperoni", "Veggie", "Chicago", "Detroit", "St. Louis", "Neapolitian"] */
class Pepperoni : public Pizza
{
public:
    Pepperoni(string name, string size)
    {
        //
    }
};

int
main()
{
    Pepperoni p1;
}

/**
 * Class Sandwich
 * Sub classes ["Club", "Chicken", "vegan", ]
 * @details Attributes
 * name
 * size
 * quantity
 * availability
 * price

 * @details Methods
 * getPrice()
 * getQuantity()
 * getAvailability()
 */

/**
 * Class Burger
 * Sub classes ["Chicken", "Beef",  ]
 * @details Attributes
 * name
 * size
 * quantity
 * availability
 * price

 * @details Methods
 * getPrice()
 * getQuantity()
 * getAvailability()
 */
