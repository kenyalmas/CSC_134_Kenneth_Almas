/*
@author: Kenneth Almas
@date: 2024-06-16
@description: Determine if a number is even or odd
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main(void) {
  int num;
  cout << "enter integer: " ;
  cin >> num;

  if (num == 0){
    cout << "Zero is not even or odd...";;
  }
  else if (num % 2 != 0) {
    cout << "The number is odd" << endl;
  }
  else {
    cout << "The number is even" << endl;
  }

return 0;
}
