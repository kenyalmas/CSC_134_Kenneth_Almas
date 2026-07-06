
/*
@author: Kenneth Almas
@date: 2024-06-16
@description: Calculate average between 3 given number
*/

// Include iostream for input and output operations
#include <iostream>
// Include iomanip for decimal percision
#include <iomanip>
// use std to keep typing minimal
using namespace std;

int main(void) {
  double num[3];                     // build an array to store user input
  double sum = 0;                    // create a seperate variable to store array sum
  double average;                    // use doubles to store the values just in case someone is fancy

  for (int  i = 0; i < 3; i++) {    // I chose a for loop because it looked cleaner
    cout << "Enter an integer: ";
    cin >> num[i];
    sum += num[i];                  // I'm more familiar with c11 syntax so I just did what I know
  }

  average = sum / 3;                // Since the array is a determined size, I just divided by the known value              // Since the array is a determined size, I just divided by the known value

  cout << fixed << setprecision(2); // Set precision to 2 decimal places for neatness

  if (average > 100) {
        cout << "You are a Cheater" << endl;    // I just thought this would be a funny catch
    }
    else if (average >= 90 && average <= 100) { // This is self explainatory logic I don't feel like I need to dive too deep into
        cout << "Letter grade: A" << endl;
    }
    else if (average >= 80 && average < 90) {
        cout << "Letter grade: B" << endl;
    }
    else if (average >= 70 && average < 80) {
        cout << "Letter grade: C" << endl;
    }
    else if (average >= 60 && average < 70) {
        cout << "Letter grade: D" << endl;
    }
    else {
        cout << "Letter grade: F" << endl;     // This should catch negative values as well
    }
  return 0;
}
