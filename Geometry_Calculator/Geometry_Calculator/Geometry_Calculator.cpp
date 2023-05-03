#include "Geometry_Calculator.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Geometry_Calculator::displayMenu()
{
	cout << left << "Geometry Calculator" << endl;
	cout << right << setw(5) << " 1. Calculate the Area of a Circle" << endl;
	cout << right << setw(5) << " 2. Calculate the Area of a Reectangle" << endl;
	cout << right << setw(5) << " 3. Calculate the Area of a Triangle" << endl;
	cout << right << setw(10) << " 4. Quit the Program" << endl;
	cout << left << "Please enter your choice 1-4 below as an integer:" << endl;
	cin >> userChoice;
}

void Geometry_Calculator::calculateShape()
{
	cout << showpoint << fixed << setprecision(2);
	while (userChoice <= 0 || userChoice >= 5)
	{
		cout << "ERROR: Please enter a valid number 1-4" << endl;
		displayMenu();
	}

	if (userChoice == 1)
	{
		double Pie = 3.14159265359;
		double userRadius;
		
		cout << "Please enter the radius of the circle you would like calculated below:" << endl;
		cin >> userRadius;
		
		double AreaC = Pie * pow(userRadius, 2);

		cout << "The area of the Circle is:"<< endl; 
		cout << AreaC << endl;
		displayMenu();
	}

	if (userChoice == 2)
	{
		double length;
		double width;

		cout << "Please enter the length of the rectangle you would like calculated below:" << endl;
		cin >> length;
		cout << "Please enter the width of the rectangle you would like calculated below:" << endl;
		cin >> width;
	
		double AreaR = length * width;
		
		cout << "The area of the rectangle is:" << endl;
		cout <<AreaR << endl;
		displayMenu();
	}

	if (userChoice == 3)
	{
		double base;
		double height;

		cout << "Please enter the height of the triangle you would like calculated below: " << endl;
		cin >> height;
		cout << "Please enter the base of the triangle you would like calculated below: " << endl;
		cin >> base;

		double AreaT = (base) / 2 * (height);

		cout << "The area of the triangle is:" << endl;
		cout << AreaT << endl;
		displayMenu();
	}
}