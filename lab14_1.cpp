#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a = 5;
	char b = 'A';
	char &c=b;
	int *x = &a;
	char *y = &b;
	int **z = &x;
	
	cout << "a = " << a <<endl;
	cout << "b = " << b <<endl;
	cout << "c = " << c <<endl;
	cout << "x = " << x <<endl;
	cout << "y = " << (int *)y <<endl;
	cout << "z = " << z <<endl;

	cout << "address a = " << &a <<endl;
	cout << "address b = " << (int *)&b <<endl;
	cout << "address c = " << (int *)&c <<endl;
	cout << "address x = " << &x <<endl;
	cout << "address y = " << &y <<endl;
	cout << "address z = " << &z <<endl;

	

	
	
	return 0;
}
