#include <iostream>
using namespace std;

// initialixe student class
class Student
{
public:
    int id;
    string name;
    static int count;

    // Refer to current instance of Student

    Student(int id, string name)
    {
        this->id = id;
        this->name = name;
        count++;
    }

    // displays the student information
    void display()
    {
        cout << id << " " << name << endl;
    }
};

int Student::count = 0;

// declaring driver function

int main(void)
{
    Student stud_1 = Student(1, "Titus");
    Student stud_2 = Student(2, "John");
    Student stud_3 = Student(3, "Kiplagat");
    Student stud_4 = Student(4, "Doe");


// display student information
    stud_1.display();
    stud_2.display();
    stud_3.display();
    stud_4.display();

    cout << "Total students are:  " << Student::count;
}