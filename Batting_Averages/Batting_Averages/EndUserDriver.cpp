#include "Batting_Average.h"
#include <iostream>
#include <string>

int main()
{
	int size = 12;
	double averages[12];
	string players[12];

	Batting_Average b;
	
	b.create_List(averages, players, size);
	b.selection_Sort(averages, players, size);
	b.display_Report(averages, players, size);

	return 0;
}