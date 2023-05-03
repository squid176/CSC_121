#include "Car.h"
#include <string>
#include <iostream>

Car::Car(int& speed)
{
	speed = 0;
	cout << "Traveling at " << speed << "mph" << endl;
}

Car::Car(int& year, string& type)
{
	int make;
	string model;

	cout << "Please enter in the make and model of your car below: " << endl;
	cin >> make;
	cin >> model;

	year = make;
	type = model;
}

void Car::display(int& make, string& model, int& speed)
{
	cout << "Your car a " << make << " " << model << " is traveling at " << speed << "mph" << endl;
}

void Car::accelerate(int& speed)
{
	cout << "Your car begins to accelerate!" << endl;
	for (int i = 0; i < 5; i++)
	{
		speed = speed + 5;
		cout << "Now at " << speed << "mph" << endl;
	}
}

void Car::brake(int& speed)
{
	cout << "Your car begins to brake!" << endl;
	for (int i = 0; i < 5; i++)
	{
		speed = speed - 5;
		cout << "Now at " << speed << "mph" << endl;
	}
}
