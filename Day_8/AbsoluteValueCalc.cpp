/*
    Using abs() function and 
    making a basic absolute 
    value calculator.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1.10
    File: AbsoluteValueCalc.cpp
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int x;
	int result;

	cout << "Enter value x: ";
	cin >> x;	

	result = abs(x);
	cout << "Absolute Value of x is: " << result;

	return 0;
}
