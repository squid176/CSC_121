#include "BinarySearch.h"
#include <iostream>
using namespace std;

int main()
{
	double* userInput = new double;
	int min = 0;
	int max = 0;
	int midpoint = 0;
	double myList[10] = { 11.1, 22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8, 99.9, 111.1 };
	bool found = false;
	int i = 0;

	cout << "What decimal number would you like to search for?" << endl;
	cin >> *userInput;
	cout << "How many places would you like the computer to search? (1-10)" << endl;
	cin >> max;

	BinarySearch b;
	while (found == false && max >= min)
	{
		b.findMidpoint(min, max, midpoint);
		b.binarySearch(userInput, min, max, myList[midpoint], found, midpoint);
		cout << "Loop has executed " << i + 1 << " times" << found << endl;
		cout << "Array Value is " << myList[midpoint] << endl;
		cout << "Midpoint Value is " << midpoint << endl;
		cout << "Max Value is " << max << endl;
		cout << "Min Value is " << min << endl;
		cout << i++;
	}
	if (found == true)
	{
		cout << "The value you are looking for "<< *userInput << " is in array " << midpoint << "!" << endl;
	}
	else if (found == false)
	{
		cout << "The value you are looking "<< *userInput <<"for was not found!" << endl;
	}
}