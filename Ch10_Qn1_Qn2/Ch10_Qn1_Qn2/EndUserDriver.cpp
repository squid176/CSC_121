#include "Scores.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arraySize;

	Scores a;
	
	arraySize = a.getUserInput();

	a.sortScores(&arraySize);
	a.averageScores(&arraySize);

	return 0;
}