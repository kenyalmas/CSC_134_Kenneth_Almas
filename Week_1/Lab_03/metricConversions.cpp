/*
@author: Kenneth Almas
@date: 2024-06-12
@description: Convert fahrenheit to celsius
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main(void) {
  float fahrenheit = 98.6f;
  float celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;

  cout << celsius << "\n";
  return 0;
}
