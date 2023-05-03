#include "PNotes.h"
#include <iostream>
using namespace std;

int* pNotes::add(int* a, int* b)
{
	*a = 4;
	*b = 2;
	c = (*a) + (*b);
	cout << "This is the memory address of c in add: " << &c << endl;
	cout << "This is the value of c in add: " << c << endl;
	return &c;
}
