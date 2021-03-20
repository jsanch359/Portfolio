// Rectangle.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float length, width, area, perimeter;
	cout << "Enter the length of the Rectangle: ";
	cin >> length;
	cout << "Enter the width of the Rectangle: ";
	cin >> width;
	
	area = length * width;
	perimeter = length + width;

	cout << "The area of the rectangle is: " << area << endl;
	cout << "The perimeter of the rectangle is: " << perimeter;
	return 0;
}
/*
Enter the length of the Rectangle: 20
Enter the width of the Rectangle: 30
The area of the rectangle is: 600
The perimeter of the rectangle is: 50
*/

