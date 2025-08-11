/*
    This program displays the difference
    between signed and unsigned integers.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 2.1
    File: SignedInt.cpp
*/


#include <iostream>
using namespace std;

int main() {
	short int i; // a signed short integer short unsigned
	int j; // an unsigned short integer 
	
	j = 60000;
	i = j;

	cout << i << " " << j << "\n";

	return 0;

}
