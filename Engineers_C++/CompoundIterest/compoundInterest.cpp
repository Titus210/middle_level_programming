#include <iostream> // use std:cout and std:cin
#include <cmath>    // to use pow function

using namespace std;

// Calculating compound interest

int main()
{
    // ------------------------------------------------------

    cout << "Enter initial amount to invest" << endl;
    double principal_amount{};
    cin >> principal_amount;

    if (principal_amount <= 0.0)
    {
        cout << "Wrong principal amount, exiting....." << endl;
        return -1;
    }

    // ---------------------------------------------------------
    cout << "Enter anual rate [% per 12 months]: " << endl;
    double rate{};
    cin >> rate;

    if (rate <= 0.0 || rate >= 100.0)
    {
        cout << "Wrong rate, exiting....." << endl;
        return -1;
    }

    //-----------------------------------------------------------
    cout << "Enter Compounded frequency, [% period of months between compounding interest [1 -72]: " << endl;
    double months{};
    cin >> months;

    if (months <= 0.0 || months >= 72.00)
    {
        cout << "Wrong value, exiting..." << endl;
        return -1;
    }

    //----------------------------------------------------------------
    cout << "Enter investment time [months 1 - 100]: " << endl;
    double time{};
    cin >> time;

    if (time >= 100 || time <= 0.0)
    {
        cout << "Wrong value, exiting..." << endl;
        return -1;
    }

    // ----------------------------------------------------------------

    // computation
    const double months_per_year = 12.0;
    const double percentage = 100.0;

    double i = time / months;

    double compound_Interest = principal_amount * std::pow((1.0 + (rate / percentage) / months_per_year), i);

    cout << "Your balance is " << compound_Interest << endl;

    // ----------------------------------------------------------------
    // Compute net income
    double income = compound_Interest - principal_amount;
    cout << "Your net income is: " << income << endl;

    const double incomeTax = 19.0;
    double netTax = (1.0 - incomeTax / percentage) * income;
    cout << "Your net income is: " << netTax << " After tax of " << incomeTax << endl;

    return 0;
}
