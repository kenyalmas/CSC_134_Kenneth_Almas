/*
@author: Kenneth Almas
@date: 2024-06-12
@description: Add two floating point values
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main(void) {
  float num1, num2;

  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;

  float sum = num1 + num2;

  cout << sum << "\n";
  return 0;
}
