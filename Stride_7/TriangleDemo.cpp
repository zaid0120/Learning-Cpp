/*
    Using operators.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1.6
    File: TriangleArea.cpp
*/

#include <iostream>
using namespace std;

int main(){

	int base;
	int height;
	int area;

	// variables must be declared.
	// other way to declare all these variables.
	// int base, height, area;
	

	base = 5;
	height = 8;

	area = base * height / 2;

	cout << "The are of the Triangle is ";

	cout << area;
	cout << "\n";

	return 0;

}
