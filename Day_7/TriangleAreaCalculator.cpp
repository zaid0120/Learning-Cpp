/*
    Using a cin statements for input 
    and making a triangle area calc.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1.7
    File: TriangleAreaCalculator.cpp
*/

#include <iostream>
using namespace std;

int main() {
	int base;
	int height;
	int area;
	
	cout << "Enter the base of triangle in cm:\n";
	cin >> base;

	cout << "Enter the height of triangle in cm: \n";
	cin >> height;

	area = base * height / 2;

	cout << "The area of the triangle with base=" << base << " and height=" << height << " is " << area << "\n";
	
	return 0;


}
