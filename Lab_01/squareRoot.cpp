/*
@author: Kenneth Almas
@date: 2024-06-01
@description: Calculate the square root of a given real number.
*/

// Include iostream for input and output operations
#include <iostream>
// Include cmath for mathematical functions
#include <cmath>
// use std to keep typing minimal
using namespace std;

int main() {
    int num1 = 5;
    // sqrt() is a QoL function in the cmath library
    double squareRoot = sqrt(num1);
    cout << "The square root of " << num1 << " is: " << squareRoot << endl;
    return 0;
}