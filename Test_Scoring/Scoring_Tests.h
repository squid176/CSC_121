#pragma once

class Scoring_Test
{
private:
	int testScore;
	const int MIN_SCORE = 0,
	          MAX_SCORE = 100;
public:
	void getScore();
	void displayScore();
	void continueOn();

};