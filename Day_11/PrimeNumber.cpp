/*
    Find all prime numbers ranging 
    from 1 - 100.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 2 Mastery
    File: PrimeNumbers.cpp
*/


#include <iostream>
using namespace std;

int main() {
	int i, j;
	bool isprime;

	for (i = 1; i <= 100; i++) {
		isprime = true;

		for (j = 2; j < i; j++) {
			if  (i%j == 0) {
				isprime = false;
				break;
			}
		}	

		if (isprime) {
			cout << i << " is prime.\n";
		}
	}

	return 0;
}
