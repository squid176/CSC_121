#include "Week1_Homework1V1.0.h" 
#include <iostream> 
#include <iomanip> 
using namespace std;

void Week1_Homework1V1::calculateCost()
{
	cout << showpoint << fixed << setprecision(2);
	cout << "Initial Cost: $" << initialCost << endl;
	cout << "	 Tax: $" << initialCost * .0675 << endl;
	cout << "	 Tip: $" << (initialCost * 1.0675) * tipAmount << endl;
	cout << "       Total: $" << (initialCost * 1.0675) * (tipAmount + 1) << endl;
}

void Week1_Homework1V1::acquireCost()
{
	cout << "Enter cost of meal below." << endl;
	cin >> initialCost;
}

void Week1_Homework1V1::getTip()
{
	cout << "Enter desired tip amount in decimal below." << endl;
	cin >> tipAmount;
}