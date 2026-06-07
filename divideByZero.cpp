/*
@author: Kenneth Almas
@date: 2024-06-01
@description: Divide a given integer by 0.
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main() {
    int num1 = 5;
    int quotient = num1 / 0;
    cout << "The quotient of " << num1 << " and 0 " << " is: " << quotient << endl;
    return 1;
}