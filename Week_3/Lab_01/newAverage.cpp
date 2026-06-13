/*
@author: Kenneth Almas
@date: 2024-06-13
@description: Calculate average temperature of 3 major cities if temperature increases by 2%
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;
// Using the iomanip library to set decimal places in output
#include <iomanip>

int main(void) {
  double newYork = 85;
  double denver = 88;
  double phoenix = 106;

  double increaseRate = 0.02;

  double newYorkNew = newYork * (1 + increaseRate);
  double denverNew = denver * (1 + increaseRate);
  double phoenixNew = phoenix * (1 + increaseRate);

  cout << fixed << setprecision(2);
  cout << "New York City: " << newYorkNew << " F\n";
  cout << "Denver: " << denverNew << " F\n";
  cout << "Phoenix: " << phoenixNew << " F\n";

  return 0;
}
