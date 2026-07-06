/*
@author: Kenneth Almas
@date: 2024-06-20
@description: determine if a given year is a leap-year
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main(void) {
    int year;

    // accept user input
    cout << "Enter a year: ";
    cin >> year;

    // logic ripped straight off of coding prompt
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "The year you entered " << year << " is a leap year" << endl;
    } else {
        cout << "The year you entered " << year << " is NOT leap year" << endl;
    }

    return 0;
}
