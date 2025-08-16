#include <iostream>

int main() {
    if (__cplusplus == 199711L) std::cout << "C++98 or C++03\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 202002L) std::cout << "C++20\n";
    else if (__cplusplus > 202002L) std::cout << "C++23 or later\n";
    else std::cout << "Unknown C++ standard\n";

    return 0;
}
