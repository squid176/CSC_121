#include "Week2_Quiz2.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Week2_Quiz2::getInteger()
{
	cout << "Enter values that you would like calculated below." << endl;
	cout << "First integer-->"; cin >> value1;
	cout << "Second Integer-->"; cin >> value2;
}

void Week2_Quiz2::calculate()
{
	cout << showpoint << fixed << setprecision(1);
	cout << value1 << "," << value2 << endl;
	cout << "Addition " << value1 << "+" << value2 << "=" << value1 + value2 << endl;
	cout << "Subtraction " << value1 << "-" << value2 << "=" << value1 - value2 << endl;
	cout << "Multiplication " << value1 << "x" << value2 << "=" << value1 * value2 << endl;
	cout << "Division " << value1 << "/" << value2 << "=" << value1 / value2 << endl;
}