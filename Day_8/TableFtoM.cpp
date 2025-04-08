/*
    Project 1-2 Generating
    a Table of Feet to Meter
    Conversions.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1.9
    File: TableFtoM.cpp
*/

#include <iostream>
using namespace std;

int main() {
	double f, m;
	int counter;

	counter = 0;

	for (f=1; f<=100; f++) {
		counter++;
		m = f / 3.281;
		cout << f << " feet is " << m << " meters.\n";
		
		if (counter == 25) {
			cout << "\n";
			counter = 0;
		}
	}

	return 0;
}
