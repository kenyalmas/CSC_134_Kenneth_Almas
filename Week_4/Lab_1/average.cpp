/*
@author: Kenneth Almas
@date: 2024-06-16
@description: Calculate average between 3 given number
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main(void) {
  double num[3];                     // build an array to store user input
  double sum = 0;                    // create a seperate variable to store array sum
  double average;                    // use floats to store the values just in case someone is fancy

  for (int  i = 0; i < 3; i++) {    // I chose a for loop because it looked cleaner
    cout << "Enter an integer: ";
    cin >> num[i];
    sum += num[i];                  // I'm more familiar with c11 syntax so I just did what I know
  }

  average = sum / 3;                // Since the array is a determined size, I just divided by the known value              // Since the array is a determined size, I just divided by the known value

  cout << fixed << setprecision(2); // Set precision to 2 decimal places for neatness
  cout << "The average of your three numbers is: " << average << endl;

  return 0;
}
