#include <iostream>
#include <numeric>

int main() {
	
//	variables for ids
//	int id1;
//	int id2;
//	int id3;

//	declaring ids array of 100 ints
	int ids[100];

//	access the first element in the array
	ids[0] = 1234565;
//	std::cout << ids[0] << std::endl;

	for (int i=0; i<100; i++){
		if (i != 0){
			ids[i] = i * 332567;
		}

	}


//	std::iota(std::begin(ids), std::end(ids), 30);

	for (int i=0; i<100; i++){
	
		std::cout << "id number "<< i+1 << " "  << ids[i] << std::endl;
	}


	return 0;
}
