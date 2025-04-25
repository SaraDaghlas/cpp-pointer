#include <iostream>
#include <cctype>
using namespace std;
void fun(int*);
void uppercase(char* ptr);//convert from lowercase to uppercase for alphabet char
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
	char snt[] = "sara Daghlas";
	cout << "Befor conversion:\t" << snt << endl;
	uppercase(snt);
	cout << "After conversion:\t" << snt << endl;
	return 0;
}
void fun(int *ptr) {
	*ptr= *ptr/5;
}
void uppercase(char* ptr) {
	while (*ptr != '\0') {
		if (islower(*ptr))
			*ptr = toupper(*ptr);
		++ptr;
	}
}
