#include <iostream>
#include <string>

int main() {
	
	int a = 42;
	long long b = 4237574982734897;
	int64_t c = 522358970235;	
	bool d = false;
	float e = 3.14f;
	double f = 3.1234345433242342342;
	char g = 'a';
	const char* h = "abc";
	std::string i = "string";
	


	std::cout << "int a size: " << sizeof(a) << std::endl;
    	std::cout << "long long b size: " << sizeof(b) << std::endl;
   	std::cout << "int64_t c size: " << sizeof(c) << std::endl;
  	std::cout << "bool d size: " << sizeof(d) << std::endl;
   	std::cout << "float e size: " << sizeof(e) << std::endl;
    	std::cout << "double f size: " << sizeof(f) << std::endl;
    	std::cout << "char g size: " << sizeof(g) << std::endl;
    	std::cout << "const char* h size: " << sizeof(h) << std::endl;
    	std::cout << "std::string i size: " << sizeof(i) << std::endl;
		

	return 0;
}
