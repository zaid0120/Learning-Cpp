/*
    Calculate the average of 
    5 numbers absolute.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1 Mastery
    File: ABS5Average.cpp
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	double v1, v2, v3, v4, v5;
	double avg;

	cout << "Please enter value 1: ";
	cin >> v1;
	v1 = abs(v1);
	cout << "Please enter value 2: ";
	cin >> v2;
	v2 = abs(v2);
	cout << "Please enter value 3: ";
	cin >> v3;
	v3 = abs(v3);
	cout << "Please enter value 4: ";
	cin >> v4;
	v4 = abs(v4);
	cout << "Please enter value 5: ";
	cin >> v5;
	v5 = abs(v5);
	
	avg = (v1+v2+v3+v4+v5) / 5;

	cout << "The absolute average of all the values is: " << avg << "\n";

	return 0;

	
}
