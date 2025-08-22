#include <iostream>
#include <numeric>
#include <iterator>
#include <array>

int main() {
	
	std::array<int,100> ids;

	std::iota(std::begin(ids), std::end(ids), 30);

//	throws exception clearer than a raw array
//	ids.at(1000000) = 99;
	ids.at(99) =169;

	for (int i=0; i<100; i++){
		std::cout << "id number " << i+1 << " " << ids[i] << std::endl;
	
	}
}

