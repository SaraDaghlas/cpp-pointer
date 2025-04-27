#include<iostream>
using namespace std;
int main() {
	cout << "hello world!";
	cout << "\nKnow if the integer you entered is even or odd" << endl;
	int x;
	cout << "Enter an integer\t";
	cin >> x;
	if (x % 2 == 0) {
		cout << "The integer you enterd is even" << endl;
}
	else {
		cout << "The integer you enterd is odd" << endl;
	}
	return 0;


}
