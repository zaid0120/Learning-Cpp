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
	double v1, avg, absAmount;
	int i;
	
	for (i = 1; i <= 5; i++) {
		cout << "Please enter value "<< i <<": ";
		cin >> v1;
		v1 = abs(v1);
		avg = avg + v1;
	}

	avg = avg/5;
	

	cout << "The absolute average of all the values is: " << avg << "\n";

	return 0;

	
}
