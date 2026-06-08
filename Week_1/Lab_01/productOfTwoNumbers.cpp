/*
@author: Kenneth Almas
@date: 2024-06-01
@description: This program calculates the product of two numbers entered by the user and displays the result.
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main() {
    int num1 = 5;
    int num2 = 10;
    int product = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
    return 0;
}