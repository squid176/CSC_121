#include "SearchingSorting.h"
#include <iostream>
using namespace std;

int main()
{
	int mylist[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int userInput = 0;
	int *b = 0;

	cout << "Please enter the value you would like to search for below: " << endl;
	cin >> userInput;
	SearchingSorting s;
	for (int a = 0; a < 10; a++)
	{
		*b = mylist[a];
		s.linearSearch(userInput, b);
	}
}