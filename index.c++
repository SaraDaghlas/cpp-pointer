#include <iostream>
using namespace std;
int main() {
	float num1, num2;
	char op;
	cout << "put num1:\t";
	cin >> num1;
	cout << "\nput num2:\t";
	cin >> num2;
	cout << "\nenter the oparation\t";
	cin >> op;
	switch (op) {
	case '+': cout << "num1+num2= " << num1 + num2; break;
	case '-': cout << "num1-num2= " << num1 - num2; break;
	case '*': cout << "num1*num2= " << num1 * num2; break;
	case '/': if (num2 == 0 && num1 != 0) {
		cout << "the result is ∞ ";
	}
			else {
		cout << "num1/num2=  " << num1 / num2;
	} break;
	
	default: cout << "this expression doesnt exists";
	
			return 0;
	}
}