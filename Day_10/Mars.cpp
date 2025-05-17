/*
    Calculate the delay of radio signals
    when talking to someone on mars
    from earth.
    Author: Zaid Ali
    Book: C++ A Beginners Guide 2.1
    File: Mars.cpp
*/

#include <iostream>
using namespace std;

int main ()
{
	double distance, lightspeed, delay, delay_in_min;

	distance = 34000000.00;
	lightspeed = 186000.00;

	delay = distance / lightspeed;

	cout << "Time delay when talking to Mars: " 
		<< delay << " seconds.\n";

	delay_in_min = delay / 60;
	
	cout << "The is " << delay_in_min << " minutes.\n";

	return 0;	

}
