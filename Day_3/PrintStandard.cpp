//this program prints out the c++ language standard your compiler is currently using.

#include <iostream>

const int numStandard = 7;

const long stdCode[numStandard] = { 199711L, 201103L, 201402L, 201703L, 202002L, 202302L, 202612L};

const char* stdName[numStandard] = { "Pre-C++11", "C++11", "C++14", "C++17", "C++20", "C++23", "C++26" };

long getCPPStandard ()
{
#if defined (_MSVC_LANG)
	return _MSVC_LANG;
#elif defined (_MSVC_VER)
	return -1;
#else
	return __cplusplus;
#endif
}

int main () 
{
	long standard = getCPPStandard();

	if (standard == -1)
	{
		std::cout << "Error: Unable to retrieve your language standard. Sorry\n";
		return 0;

	}

	for (int i = 0; i < numStandard; ++i)
	{
		if (standard == stdCode[i])
		{
			std::cout << "Your compiler is using " << stdName[i]
			       << " language standard code " << standard << "L)\n";
			break;
		}

		if (standard < stdCode[i])
		{
			std::cout << "Your compiler is using a preview of " << stdName[i]
				<< " language standard code " << standard << "L)\n";
			break;
		}

	}
	
	return 0;
}
