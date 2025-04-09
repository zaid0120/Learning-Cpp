/*
    Making an approximate
    earth to moon weight
    table.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1 Mastery
    File: Moon.cpp
*/

#include <iostream>
using namespace std;

int main () {
	double mw, ew;
	int counter;

	counter = 0;

	for (ew = 1; ew <= 100; ew++){
		counter++;
		mw = ew * .17;
		cout << ew << " earth lbs is equal to about " << mw << " moon lbs.\n";

		if (counter == 25){
			cout << "\n";
			counter = 0;		
		}
	}

	return 0;
}
