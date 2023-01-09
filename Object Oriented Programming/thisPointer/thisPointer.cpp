#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    Employee(int id, string name, float salary)
    {
        this -> id = id;
        this -> name = name;
        this -> salary = salary;

    }

    void display() {
    cout << id <<" "<< name << " " << salary << endl;
    }
};

int main()
{
    Employee e1 = Employee(12, "Titus", 89000);
    Employee e2 = Employee (11, "Kiplagat", 32000);

    e2.display();
    e1.display();

    return 0;
}
