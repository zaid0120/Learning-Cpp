#include <iostream>
#include <array>
#include <numeric>
#include <iterator>

int main() {


	int servantIDs[100];
	std::array<int,100> knightIDs;
	std::array<int,50> ambassadorIDs;
	int servantCounter = 0;
	int knightCounter = 0;


	for (int i=0; i<100; i++) {
		if (i == 0) {
			servantIDs[i] = 5000;
			knightIDs.at(i) = 10000;
		} else {
			servantIDs[i] = 5000 + (i*25);
			knightIDs.at(i) = knightIDs[i-1] + 50;
		}


		if ((servantIDs[i] % 100) == 0) {
			servantCounter++;
		}

		if ((knightIDs[i] % 10) == 0) {
			knightCounter++;
		}



	}
	
	
	
	std::iota(std::begin(ambassadorIDs), std::end(ambassadorIDs), 20000);
	

	for (int i=0; i<100; i++) {
		std::cout << "Servant Number " << i+1 << " " << servantIDs[i] << std::endl;

	}

	for (int i=0; i<100; i++) {
		std::cout << "Knight Number " << i+1 << " " << knightIDs[i] << std::endl;

	}

	for (int i=0; i<50; i++) {
		std::cout << "Ambassador Number " << i+1 << " " << ambassadorIDs[i] << std::endl;

	}

	std::cout << "There are " << servantCounter << " servants in the registry whose ID numbers are evenly divisible by 100\n";
	std::cout << "There are " << knightCounter << " knights in the registry whose ID numbers end in 0\n";
	

}
