#include "Scores.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

Scores::Student::Student()
{
	name = " ";
	score = 0;
}

Scores::Student::Student(string* name1, double* score1)
{
	name = *name1;
	score = *score1;
}

int Scores::getUserInput()
{
	string name0;
	double score0;
	int classSize;
	cout << fixed << showpoint << setprecision(2);
	cout << "How many students would you like to input test scores for?" << endl;
	cin >> classSize;

	s = new Student[classSize]; // Dynamic memory allocation of student creates a pointer to an array of student objects of the size of classSize

	cout << "Please enter the students name and score below:" << endl;
	
	for (int i = 0; i < classSize; i++)
	{
		cout << "Name: ";
		cin >> name0;
		cout << "Score: ";
		cin >> score0;
		(*(s + i)) = Student(&name0, &score0); // Must use assignment operator since constructor is being used? else use "->". This is assigning it to the ith element of the array of student objects
		
		if (score0 < 0 || score0 > 100)
		{
			cout << "ERROR: Invalid Test Score Input!!" << endl;
			getUserInput();
		}
	}

	return classSize;
}

void Scores::sortScores(int* arraySize)
{
	int min;
	int j;
	int i;

	cout << fixed << showpoint << setprecision(2);

	for (i = 0; i < *arraySize; i++)
	{
		min = i;

		for (j = i + 1; j < *arraySize; j++)
		{
			if ((*(s + j)).score < (*(s + min)).score)
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(*(s + i), *(s + min));
		}
	}

	cout << "The sorted Test scores are as follows: " << endl;

	for (int a = 0; a < *arraySize; a++)
	{
		cout << "Name: " << (*(s + a)).name << " Score: " << (*(s + a)).score << "%" << endl;
	}
}

void Scores::averageScores(int* arraySize)
{
	double total = 0;
	double average = 0;

	for (int i = 0; i < *arraySize; i++)
	{
		total += (*(s + i)).score;
	}

	average = total / *arraySize;

	cout << fixed << showpoint << setprecision(2);
	cout << "The Class Average is " << average << "%" << endl;
}