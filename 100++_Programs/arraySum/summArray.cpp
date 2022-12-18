#include <iostream>
using namespace std;

int main()
{
    int arraySize;
    cout << "Enter array size" << endl;
    cin >> arraySize;

    int array[arraySize];
    int sum = 0;
    for (int i = 0; i <= sizeof(array) / sizeof(array[0]); i++)
    {
               cout << "Enter a number" << endl;
        cin >> array[i];
    }

    for (int i = 0; i <= sizeof(array) / sizeof(array[0]); i++)
    {

        sum += array[i];
    }
    cout << "The total sum is: " << sum << endl;
}
