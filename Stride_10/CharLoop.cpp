/*
    Program that displays the alphabet
    using a char loop.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 2.1
    File: CharLoop.cpp
*/

#include <iostream>
using namespace std;

int main() {
	
	char letter;

	for (letter = 'A'; letter <= 'Z'; letter++) {
		cout << letter;
	}

	cout << "\n";

	return 0;

}
