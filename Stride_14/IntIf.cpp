/*
    Use an int value to control the if.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 3.1 
    File: IntIf.cpp
*/

#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "Please enter the numerator: ";
	cin >> a;
	cout << "Please enter the denominator: ";
	cin >> b;

	if (b) cout <<  "Result: " << a/b << 
		" because denominator is non zero.\n";
	else cout << "Cannot divide " << a << " by " << b << " zero.\n";

	return 0;

}
