#include <iostream>
#include <cctype>
using namespace std;
int con(int * );
int con(int a );
void fun(int*);
void uppercase(char* ptr);//convert from lowercase to uppercase for alphabet char
void constchar(char const*);// fun to display a constant char but isnt able to edit at the char (just for read pointer that reads a constant char)
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
	char constarr[] = "wecom to github";
	constchar(constarr);//cout the arr of char 
	int c = 3;
	cout << "passing the variables through the fun" << endl;
	cout << "c=  " << c <<endl;
	cout << "by value: " << con(c)<<endl;
	cout << "after passing it through the fun:" << "    c:\t" << c<<endl;
	cout << "by pointer: " << con(&c) << endl;
	cout << "after passing it through the fun:" << "    c:\t" << c<<endl;
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
void constchar(char const* rptr) {
	for (; *rptr != '\0'; *rptr++)
		cout << *rptr;//to move to anather index until arrive null char
}
int con(int* aptr) {
	return *aptr =10;
}
int con(int a) {
	return a =10;
}