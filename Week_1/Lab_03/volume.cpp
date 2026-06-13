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
  double pi = 3.1415;
  double radius = 7.0;

  double volume = (3.0 / 4.0) * pi * radius * radius * radius;

  cout << volume << "\n";

  return 0;
}
