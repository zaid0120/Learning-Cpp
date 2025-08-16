/*
    Demonstrating some dynamic
    initialization.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 2.3
    File: DynamicInitial.cpp
*/

#include <iostream>
using namespace std;

int main() {
	double radius = 4.0, height = 5.0;

	// Dynamically initialize volume
	double volume = 3.1416 * radius * radius * height;

	cout << "Volume is " << volume << "\n";

	return 0;
}
