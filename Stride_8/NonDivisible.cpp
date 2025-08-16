/*
    Code blocks demonstration
    and preventing division by
    zero.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1.9
    File: NonDivisible.cpp
*/
#include <iostream>
using namespace std;

int main() {
	// declare vars for result, denominator and numerator
	double result, d, n;

	cout << "Enter the numerator: ";
	cin >> n;

	cout << "Enter the denominator: ";
	cin >> d;

	if (d != 0) {
		cout << "The denominator you have entered is not Zero. Therfore Divisible.\n";
		result = n/d;
		cout << "The fractional number " << n << "/" << d << " = " << result << "\n";

		
	} else {
		cout << "The denominator you have entered is Zero. Therfore Non-Divisible.\n";
		
	}

	return 0;

}
