#include <iostream>

int main() {


	{
		int x = 9;
		std::cout << "x in scope 1 " << x << std::endl;
	}

	{
		int x = 1;
		std::cout << "x in scope 2 " << x << std::endl;
	}
}
