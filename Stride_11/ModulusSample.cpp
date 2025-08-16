/*
    Demonstrate the modulus operator %.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 2.4
    File: ModulusSample.cpp
*/

#include <iostream>
using namespace std;

int main() {
	int x,y;
	x = 10;
	y = 3;

	cout << x << "/" << y << " is " << x/y << 
		" with a remainder of " << x%y << "\n";

	x = 1;
	y = 2;

	cout << x << "/" << y << " is " << x/y << "\n" <<
	       	x << "%" << y << " is " << x%y << "\n";

	return 0;
}
