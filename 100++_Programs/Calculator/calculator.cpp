#include <iostream>
using namespace std;

//----------------------------------------------------------------
// C++ calculator
//----------------------------------------------------------------

//--------------------------------------------------------------
//      Function Declaration
//-----------------------------------------------------------
int multiplication(int x, int y);
int division(int x, int y);
int addition(int x, int y);
int subtraction(int x, int y);

int main()
{
    int i, x, y, option = 0;

    cout << "Which calculation type do you want to perform" << endl;
    cout << " 1. addition \n"
            " 2. Multiplication \n"
            " 3. Division \n"
            " 4. Subraction \n"
         << endl;
    cin >> option;
    cout << option << endl;
    // switch to choose calculation type
    switch (option)
    {
    case 1:
    {
        cout << "The sum is " << addition(x, y)
             << endl;
    }
    case 2:
    {
        cout << "The product is " << multiplication(x, y)
             << endl;
    }

    case 3:
    {
        cout << "The division is " << division(x, y) << endl;
    }

    case 4:
    {
        cout << "The difference is " << subtraction(x, y) << endl;
    }

    default:
        cout << "Enter a valid option " << main() << endl;
    }
}
//----------------------------------------------------------------
// Sum
//----------------------------------------------------------------
int addition(int x, int y)
{
    cout << "Enter second number" << endl;
    cin >> x;

    cout << "Enter first number" << endl;
    cin >> y;
    return x + y;
}

//----------------------------------------------------------------
// Multiplication
//----------------------------------------------------------------
int multiplication(int x, int y)
{
    cout << "Enter second number" << endl;
    cin >> x;

    cout << "Enter first number" << endl;
    cin >> y;
    return x * y;
}

//----------------------------------------------------------------
// Division
//----------------------------------------------------------------
int division(int x, int y)
{

    cout << "Enter numerator:" << endl;
    cin >> x;

    cout << "Enter denominator" << endl;
    cin >> y;
    return x / y;
}

//----------------------------------------------------------------
// Subtraction
//----------------------------------------------------------------
int subtraction(int x, int y)
{
    cout << "Enter second number" << endl;
    cin >> x;

    cout << "Enter first number" << endl;
    cin >> y;
    return x - y;
}
