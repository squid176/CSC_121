#include "PNotes.h"
#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int* z = 0;
	pNotes n;
	z = n.add(&a, &b);
	cout << "This is the value of z in main: " << *z << endl;
	cout << "This is the memory address of z in main: " << z << endl;
	cout << "This is the value of a in main: " << a << endl;
	cout << "This is the value of a in main: " << b << endl;

}