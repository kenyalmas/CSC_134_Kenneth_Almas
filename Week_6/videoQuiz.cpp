// interacting with the user
#include <iostream>

// keeping things pretty
using namespace std;

int main()
{
    // initializing vars
    int score;
    int count = 0;
    int passingScores = 0;
    float total = 0.0f;
    bool continueEntering = true;

    // while loop continues until continueEntering is false
    while (continueEntering)
    {
        // take grade from user
        cout << "Enter a test score (0 - 100): ";
        cin >> score;

        // collect a running total
        total += score;
        count++;

        // collect number of passed tests
        if (score >= 70)
        {
            passingScores++;
        }

        // find out if we are done collecting scores
        cout << "Enter another score? (1 for true, 0 for false): ";
        cin >> continueEntering;
    }

    // initializing
    float average = 0.0f;

    // make sure that we don't divide by 0
    if (count > 0)
    {
        // divide the total of the test scores by the number of tests
        average = total / count;
    }

    // Pretty-print the results
    cout << "\nResults" << endl;
    cout << "-------" << endl;
    cout << "Scores Entered: " << count << endl;
    cout << "Passing Scores: " << passingScores << endl;
    cout << "Average Score: " << average << endl;

    // determine if we have a passing grade
    bool classPassed = average >= 70.0f;

    cout << "Class Average Passing: " << classPassed << endl;

    return 0;
}
