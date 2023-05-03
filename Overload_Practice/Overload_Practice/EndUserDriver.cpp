#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int make0 = 0;
	string model0 = " ";
	int speed0 = 1;

	Car car1(speed0);
	Car car2(make0, model0);

	car2.display(make0, model0, speed0);
	car1.accelerate(speed0);
	car1.brake(speed0);

	return 0;
}