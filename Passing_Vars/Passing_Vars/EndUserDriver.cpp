#include "Passing.h"
#include <iostream>
using namespace std;

int main()
{
	Passing p;

	int value = 4;
	int* value1 = &value;

	cout << "In main, value is " << value << endl;
	cout << "Now calling doubleNum..." << endl;
	p.doubleNum(value);
	cout << "Now back in main using pass by reference, value is " << value << endl;
	
	cout << "Now calling doubleNum_V2..." << endl;
	p.doubleNum_V2(value1);
	cout << "Now back in main using pass by pointer, value is " << value << endl;
	
	cout << "Now calling doubleNum_V3..." << endl;
	value = p.doubleNum_V3(value); // must set value to equal the method called so that when it returns a value to main the value is changed
	cout << "Now back in main using pass by value, value is " << value << endl;

	return 0;
}
