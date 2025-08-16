#include <iostream>
using namespace std;

int main() {
	int n, i;
	bool isprime = true;

	cout << "Enter a number: ";
	cin >> n;

	for (i=2; i<n; i++) {
		if (n%i == 0) {
			isprime = false;
			cout << i << " is a factor of " << n << ".\n";
		}
	}
	if (isprime) {
		cout << n << " is prime.\n";
	
	} else {
		cout << n << " is not prime.\n";
		
	}
	return 0;
}
