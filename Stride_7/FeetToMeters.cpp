/*
    Project 1-1 FtoM calculates
    meters given a feet measurment.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1.7
    File: FeetToMeters.cpp
*/

#include <iostream>
using namespace std;

int main() {
	// declare feet and meter vars
	double f;
	double m;
	
	// prompt for feet measurement
	cout << "Enter the measurement in feet: ";
	cin >> f;
	
	// conversion math to meters
	m = f / 3.281;

	cout << "The mesurement for " << f << " feet in meters is: " << m << "\n";

	return 0;
}
