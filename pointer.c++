#include <iostream>
using namespace std;
void fun(int*);
int main() {
	int x = 5;
	int y = 10;
	int* xPtr = &x;
	int* yPtr = &y;
	cout << "x Address is:\t" << xPtr << endl;//xPtr is pointer that points on x address
	cout << " the value of x is:\t" << *xPtr << endl;//*xPtr gives the value of x 
	cout << "y Address is:\t" << yPtr << endl;
	cout << " the value of y is:\t" << *yPtr << endl;
	cout << "Pass by reference with pointer:" << endl;
	cout << "the original x\t" << x << endl;
	fun(&x);
	cout << "x after passing it through the fun\t" << x << endl;
	return 0;
}
void fun(int *ptr) {
	*ptr= *ptr/5;
}
