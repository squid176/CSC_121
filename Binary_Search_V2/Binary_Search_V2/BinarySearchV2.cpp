#include "BinarySearchV2.h"
#include <iostream>
using namespace std;

void BinarySearchV2::binarySearch(double* userInput, int& min, int& max, double& arrayValue, bool& found, int& midpoint)
{
	if (arrayValue == *userInput)
	{
		found = true;
	}
	else if (arrayValue < *userInput)
	{
		min = midpoint;
	}
	else if (arrayValue > *userInput)
	{
		max = midpoint;
	}
}

void BinarySearchV2::findMidpoint(int& min, int& max, int& midpoint)
{
	midpoint = (min + max) / 2;
}