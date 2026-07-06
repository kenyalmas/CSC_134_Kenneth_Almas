/*
@author: Kenneth Almas
@date: 2024-26-16
@description: Average 10 grades
*/

// Include iostream for input and output operations
#include <iostream>
// Keeping our code clean and readable
using namespace std;

int main() {
    // initialize what I need
    int counter = 0;
    double grade;
    double sum = 0.0;
    double average;

    // Accept no less than 10 numbers
    while (counter < 10) {
        cout << "Enter grade " << counter + 1 << ": ";
        cin >> grade;
        sum = sum + grade;
        counter++;
    }

    // Average over known number of sumbissions
    average = sum / 10.0;

    // Display calculated average
    cout << "The average of the 10 grades is: " << average << endl;

    return 0;
}
