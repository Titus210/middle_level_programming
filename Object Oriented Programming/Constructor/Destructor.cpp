#include <iostream>
using namespace std;




class Employee
{
public:
    Employee()
    {
        cout << "Constructor invoked"<< endl;
    }
    ~Employee()
    {
        cout << "Destructor invoked"<< endl;
    }
};
int main(void)
{

    Employee e1;
    cout << &e1 << endl;
    Employee e2;
}
