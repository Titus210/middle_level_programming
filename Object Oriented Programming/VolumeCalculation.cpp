#include <iostream>

using namespace std;


// declaring class

class Box
{
public:
    double length;
    double width;
    double height;
};

int main()
{
    // Declare Box of types

    Box box1;
    Box box2;
    double volume = 0.00;

    // Box Specification

    box1.height = 5.0;
    box1.width = 12.00;
    box1.length = 20.00;

    // Box Specification

    box2.height = 15.0;
    box2.width = 22.00;
    box2.length = 29.00;

    // Volume of box

    volume = box1.height * box1.width * box1.length ;
    cout << "Volume of Box 1 is: " << volume <<endl;

    volume = box2.height * box2.width * box2.length ;

    cout << "Volume of Box 2 is: " << volume <<endl;

}
