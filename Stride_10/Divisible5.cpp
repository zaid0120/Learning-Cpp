#include <iostream>
using namespace std;

int main() {
	int n1;

	cout << "Enter number: ";
	cin >> n1;

	if (n1 % 5 == 0) {
		cout << "buzz\n";
	} else {
		cout << "not buzz\n";
	}

	return 0;

}
