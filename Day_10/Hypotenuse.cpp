/*
    Program finds the hypotenuse length 
    given the lenth of the two opposing sides
    using Pythagoreans Theorem
    Author: Zaid Ali
    Book: C++ A Beginners Guide 2.1
    File: Hypotenuse.cpp
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double x, y, z;

	x = 4.00;
	y = 5.00;

	z = sqrt(x*x + y*y);

	cout << "The hypotenuse of the given triangle is: " << z << "\n";

	return 0;
}
