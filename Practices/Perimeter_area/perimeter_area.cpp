#include <iostream>
using namespace std;

int main(){
	// declare length, area, width, perimeter variables
	int length, width;
	float area, perimeter;

	// get length of rectangle
	cout << "Please enter the length of rectangle: ";
	cin >> length;
	// get width of rectangle
	cout << "Please enter the width rectangle: ";
	cin >> width;

	// calculate perimeter
	perimeter = 2 * (length + width);
	area = length * width;

	// Display Result
	cout << "The permimeter is: " << perimeter <<"\nThe area is: " << area ;
	return 0;
}
