#pragma once
#include <string>
using namespace std;

class Car
{
private:

public:
	Car(int&);
	Car(int&, string&);
	void display(int&, string&, int&);
	void accelerate(int&);
	void brake(int&);
};