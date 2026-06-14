/*
@author: Kenneth Almas
@date: 2024-06-12
@description: find the area of a circle with a given radius
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main(void) {
  float pi = 3.1415;
  int radius = 19;

  float area = pi * (radius * radius);

  cout << area << "\n";
  return 0;
}
