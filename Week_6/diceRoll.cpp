/*
@author: Kenneth Almas
@date: 7/5/2026
@description: roll a d-6 a chosen number of times
*/

// Include iostream for input and output operations
#include <iostream>
// using standard lib for the random functions
#include <cstdlib>
// using the time library to get the exact time for psuedo-randomness
#include <ctime>
// Keeping our code clean and readable
using namespace std;



int main() {
    // initialize
    int rolls;

    // seed the number generator
    srand(static_cast<unsigned int>(time(0)));

    // get number from user
    cout << "How many times would you like to roll the die? ";
    cin >> rolls;

    // roll however many times we need to
    for (int i = 0; i < rolls; i++) {
        int die = rand() % 6 + 1;
        cout << "Roll " << i + 1 << ": " << die << endl;
    }

    return 0;
}
