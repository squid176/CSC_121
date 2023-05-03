#include "Scoring_Tests.h"
#include <iostream>
using namespace std;


void Scoring_Test::getScore()
{
    cout << "Enter your numeric test score and I will\n"
        << "tell you the letter grade you earned: ";
    cin >> testScore;
}

void Scoring_Test::displayScore()
{
    const int A_SCORE = 90,
        B_SCORE = 80,
        C_SCORE = 70,
        D_SCORE = 60;

    if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
    {

        if (testScore >= A_SCORE)
            cout << "Your grade is A.\n";
        else if (testScore >= B_SCORE)
            cout << "Your grade is B.\n";
        else if (testScore >= C_SCORE)
            cout << "Your grade is C.\n";
        else if (testScore >= D_SCORE)
            cout << "Your grade is D.\n";
        else
            cout << "Your grade is F.\n";

    }
    else if (testScore < MIN_SCORE)
    {
        cout << "ERROR" << endl;
        cout << "You entered " << testScore << " ! Which is lower than " << MIN_SCORE << endl;
        cout << "Please enter a value between " << MIN_SCORE << " and " << MAX_SCORE << "." << endl;
    }
    else if (testScore > MAX_SCORE)
    {
        cout << "ERROR" << endl;
        cout << "You entered " << testScore << " ! Which is higher than " << MAX_SCORE << endl;
        cout << "Please enter a value between " << MIN_SCORE << " and " << MAX_SCORE << "." << endl;
    }
}

void Scoring_Test::continueOn()
{
    char continueV;
    if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
    {
        cout << "If you do not wish continue please enter q below to quit the program, else any other character:" << endl;
        cin >> continueV;
        continueV = tolower(continueV);

        while (continueV != 'q')
        {
                getScore();
                displayScore();
                continueOn();
        };
    }
}