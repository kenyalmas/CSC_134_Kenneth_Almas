/*
@author: Kenneth Almas
@date: 2024-06-12
@description: Print a string using the string library and concatenation
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main(void) {
  string verbiage = "Today I am ";
  string age = "25";
  string verbiage_end = " years old!";

  string message = verbiage + age + verbiage_end;

  cout << message << "\n";
  return 0;
}
