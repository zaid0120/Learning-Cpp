/*
    Using and Demonstrating casts.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 2.10
    File: CastDemo.cpp
*/

#include <iostream>
using namespace std;

int main() {
	int i;

	for (i=1; i<=10; ++i) {
		cout << i << "/2 is: " << (float) i/2 << "\n";
	}
	return 0;
}
