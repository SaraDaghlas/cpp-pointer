#include<iostream>
using namespace std;
void cube(int *ptr);
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
	int y=3;
	cout<<"y before passing it through the fun\t"<<y;
	cube(&y);
	cout<<"y after passing it through the fun\t"<<y;
	
	return 0;


}
