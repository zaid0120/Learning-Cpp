/*
    Using a variable.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 1.5
    File: Sample.cpp
*/

#include <iostream>
using namespace std;

int main() 
{
    // Declare an integer variable (named location in memory) with the name ladderHeight
    int ladderHeight;
    // Assign the value of 7 to ladderHeight
    ladderHeight = 7;

    // Send the string "The height of the ladder is " to the standard output using std::cout
    cout << "The height of the ladder is "
    // Send the variable ladderHeight to the standard output using std::cout
    cout << ladderHeight;

    return 0;
}