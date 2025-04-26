#include<iostream>
using namespace std;
int main() {
	bool prm = true;
	int x;
	cout << "Enter a positive num\t";
	cin >> x;
	if (x == 0 || x == 1) {
		prm = false;
	}
	for (int i = 2; i <= x / 2; i++) {
		if (x % i == 0) {
			prm = false; break;
		}
	}
	if (prm) {
		cout << "The numer you entered is a prime number" << endl;
	}
	else {
		cout << "The numer you entered is not a prime number" << endl;
	}return 0;
}