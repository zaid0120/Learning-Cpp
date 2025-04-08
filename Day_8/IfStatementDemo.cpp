/*
    If statement demonstration
    using vars a b and c.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1.8
    File: IfStatementDemo.cpp
*/

#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	a = 2;
	b = 3;
	
	// this is a is less than b
	if (a < b) cout << "a is less than b!\n";

	// this wont display anything
	if (a == b) cout << "you won't see this!\n";

	// blank line 
	cout << "\n";

	// assign the value -1 to c
	c = a - b;
	
	// display the c variable
	cout << "c contains " << c << "\n";

	// if c is greater than or equal to zero
	if (c >= 0) cout << "c is non-negative!\n";
	// if c is less than zero 
	if (c < 0) cout << "c is negative!\n";
	
	// blank line
	cout << "\n";

	// assign the value 1 to c
	c = b - a;
	
	// display the c variable again
	cout << "c contains " << c << "\n";

	// if c is greater than or equal to zero
	if (c >= 0) cout << "c is non-negative!\n";
	// if c is less than zero
	if (c < 0) cout << "c is negative!\n";

	return 0;
	
}
