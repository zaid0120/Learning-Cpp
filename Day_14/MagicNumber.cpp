/*
    if and else magic number program
    Author: Zaid Ali
    Book: C++ A Beginners Guide 3.1 
    File: MagicNumber.cpp
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	
	int magic, guess;
	
	magic = rand();

	cout << "Enter the number you think it is: ";
	cin >> guess;

	if (guess == magic){
		cout << "Lucky, You Got It!!\n";
		cout << magic << " is the lucky number.\n";

	} else {
		cout << "Better Luck Next Time...\n";
		if (guess > magic) cout << "You guessed too high!\n";
		else cout << "You guessed too low!\n";
	
	}

	return 0;
}
