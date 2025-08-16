/*
    Create an XOR using the
    C++ logical operators.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 2.5
    File: XOR.cpp
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	bool p, q;

	p = true;
	q = true;

	cout << p << " XOR " << q << " is " << 
		( (p || q) && !(p && q) ) << "\n";

	p = false;
	q = true;

	cout << p << " XOR " << q << " is " << 
		( (p || q) && !(p && q) ) << "\n";

	p = true;
	q = false;

	cout << p << " XOR " << q << " is " << 
		( (p || q) && !(p && q) ) << "\n";

	p = false;
	q = false;

	cout << p << " XOR " << q << " is " << 
		( (p || q) && !(p && q) ) << "\n";

	return 0;
}
