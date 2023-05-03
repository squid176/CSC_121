#include "Batting_Average.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

void Batting_Average::create_List(double averages[], string players[], int size)
{
	double random_number = 0;
	int minValue = 1, maxValue = 9, seed = time(0);

	srand(seed);

	for (int i = 0; i < size; i++)
	{
		random_number = rand() % (maxValue - minValue + 1) + minValue;

		averages[i] = random_number / 123;
	}
	
	ifstream filein;
	
	filein.open("Players.txt");
	for (int i = 0; i < size; i++)
	{
		filein >> players[i];
	}


}

void Batting_Average::selection_Sort(double averages[], string players[], int size)
{
	int max;
	for (int i = 0; i < size; i++)
	{
		max = i;

		for (int j = i + 1; j < size; j++)
		{
			if (averages[j] > averages[max])
			{
				max = j;
			}
			if (max != i)
			{
				swap(averages[max], averages[i]);
				swap(players[max], players[i]);
			}
		}
	}
}

void Batting_Average::display_Report(double averages[], string players[], int size)
{
	cout << "Here is your team's batting average report!" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << showpoint << fixed << setprecision(3);
		cout << i + 1 << ". " << players[i] << " " << averages[i] << endl;
	}
	cout << "Looks like a good season!" << endl;

}
