/*
    Demonstrating the difference
    between double and int type.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1.7
    File: DoubleDemo.cpp
*/

#include <iostream>
using namespace std;

int main() {

	//declare vars
	int ivar;
	double dvar;

	//assign values
	ivar = 100;
	dvar= 100;

	// start position sentence 
	cout << "original value of ivar: " << ivar << "\n";
	cout << "original value of dvar: " << dvar << "\n";
	//blank line
	cout << "\n";
	
	// calculate vars divided by 3
	ivar = ivar / 3;
	dvar = dvar / 3.0;

	// last position sentence
	cout << "ivar after division: " << ivar << "\n";
	cout << "dvar after division: " << dvar << "\n";

	return 0;

}

