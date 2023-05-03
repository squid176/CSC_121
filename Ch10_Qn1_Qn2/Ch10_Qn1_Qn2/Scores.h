#pragma once
#include <string>
using namespace std;

class Scores
{
private:
	
public:
	class Student //Second class is used to structure data for the students
	{
	public:
		string name;
		double score;
		Student(); // Constructor to intialize variables when first created
		Student(string* name1, double* score1); // constructor overload will let you create an array of students so that you can store different names and scores for each student
	};
	Student *s;
	int getUserInput();
	void sortScores(int* arraySize);
	void averageScores(int* arraySize);
};