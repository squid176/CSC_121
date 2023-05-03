#include "Interest_Program.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Interest_Program::getPD()
{
	cout << "What is the price of the pizza?" << endl;
	cin >> pizzaPrice;
	cout << "What is the size of the pizza? (in inches)" << endl;
	cin >> diameterP;
}

void Interest_Program::calculatePPI()
{
	double radius = diameterP / 2;
	double area = 3.14159265359 * pow(radius, 2); 
	double inchPrice = pizzaPrice / area;
	cout << showpoint << fixed << setprecision(2);
	cout << "Diameter: " << static_cast<int> (diameterP) << "in" << endl;
	cout << "Company Revenue per Square Inch: $" << inchPrice << endl;
}