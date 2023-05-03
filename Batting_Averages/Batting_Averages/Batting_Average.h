#pragma once
#include <string>
using namespace std;

class Batting_Average
{
private:

public:
	void create_List(double averages[], string players[], int size);
	void selection_Sort(double averages[], string players[], int size);
	void display_Report(double averages[], string players[], int size);
};