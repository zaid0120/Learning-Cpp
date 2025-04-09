/*
    Jupiter to Earth Years
    Converter.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1 Mastery
    File: JupiterYears.cpp
*/

#include <iostream>
using namespace std;

int main (){
	double jy, ey;

	cout << "Enter The Years Spent On Jupiter: ";
	cin >> jy;

	ey = jy * 12;

	cout << "You Have Spent " << ey << " Earth Years On Jupiter.\n";

	return 0;	
} 
