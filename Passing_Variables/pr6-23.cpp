
// This program uses a reference variable as a function parameter.
#include <iostream>
using namespace std;

/**************************************************************
 *                         doubleNum                          *
 * This function's parameter is a reference variable. The &   *
 * tells us that. This means it receives a reference to the   *
 * original variable passed to it, rather than a copy of that *
 * variable's data. The statement refVar *= 2 is doubling the *
 * data stored in the value variable defined in main.         *
 **************************************************************/
void doubleNum (int &refVar) // Passing by reference because & is used
{
	refVar = 2;
}
