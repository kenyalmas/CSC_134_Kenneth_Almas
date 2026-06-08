/*
@author: Kenneth Almas
@date: 2024-06-08
@description: Calculate the voltage of something.
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main() {
    int voltage = 0; // keeping as an int since we are given whole number values
    int current = 10; // I
    int resistance = 2; // R
    voltage = current * resistance; // Calculate voltage using Ohm's Law
    cout << "The voltage of the circuit is: " << voltage << " volts." << endl;
    return 0;
}