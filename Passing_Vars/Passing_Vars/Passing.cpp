#include "Passing.h"
// This program uses a reference variable as a function parameter.
#include <iostream>
#include <cmath>
using namespace std;

/**************************************************************
 *                         doubleNum                          *
 * This function's parameter is a reference variable. The &   *
 * tells us that. This means it receives a reference to the   *
 * original variable passed to it, rather than a copy of that *
 * variable's data. The statement refVar *= 2 is doubling the *
 * data stored in the value variable defined in main.         *
 **************************************************************/
void Passing::doubleNum(int& refVar) // Passing by reference because & is used
{
	refVar = 2;
}

void Passing::doubleNum_V2(int* refVar2)
{
	*refVar2 = pow(*refVar2, 2); // don't forget to dereference
}

int Passing::doubleNum_V3(int refVar0)
{
	refVar0 = refVar0 * 6;
	return refVar0;
}
