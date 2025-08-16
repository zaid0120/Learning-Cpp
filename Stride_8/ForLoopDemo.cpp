/*
    For Loop Demonstration.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1.8
    File: ForLoopDemo.cpp
*/

#include <iostream>
using namespace std;

int main() {
	int count;

	for (count=1; count <= 100; count++) {
		cout << count << " ";
		if (count == 100)
			cout << "\n";
	}

	cout << "count outside the loop: " << count << "\n";
	return 0;
}
