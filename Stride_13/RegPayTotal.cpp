/*
    Program that computes regular payments 
    on a loan.
    Author: Zaid Ali
    Book: C++ A Beginners Guide Project 2-3
    File: RegPay.cpp
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double IntRate;
	double Principal;
	double PayPerYear;
	double NumYears;
	double Payment;
	double numer, denom;
	double base, exp;

	double TotalInterest;
	double TotalPaid;

	cout << "Please enter your principal: ";
	cin >> Principal;

	cout << "Please enter the interest rate: ";
	cin >> IntRate;

	cout << "Please enter number of payments per year: ";
	cin >> PayPerYear;
	
	cout << "Please enter length of loan in years: ";
	cin >> NumYears;

	numer = IntRate * (Principal / PayPerYear);
	
	base = (IntRate / PayPerYear) + 1;
	
	exp = -(PayPerYear * NumYears);
	
	denom = 1 - pow(base, exp);

	Payment = numer / denom;

	cout << "Payment is: $" << Payment << "\n";

	TotalPaid = Payment * (NumYears * PayPerYear);
	TotalInterest = (TotalPaid - Principal);

	cout << "Total Payment is: $" << TotalPaid << ", of which $" << TotalInterest << " is interest.\n";

	return 0;
}
