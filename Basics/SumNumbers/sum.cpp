#include <iostream>
using namespace std;
int sum_no(int x, int y);

// sum two numbers entered by user
int main()
{
    // variable declarations
    int num_1, num_2, sum = 0;

    // prompt for numbers
    cout << "Please enter a number" << endl;
    cin >> num_1;
    cout << "Please enter a number" << endl;
    cin >> num_2;

    sum = sum_no(num_1, num_2);
    cout << "The sum of " << num_1 << "and " << num_2 << "is " << sum << endl;

    return 0;
}

int sum_no(int x, int y)
{
    return x + y;
}