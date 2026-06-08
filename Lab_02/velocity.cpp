/*
@author: Kenneth Almas
@date: 2024-06-08
@description: Calculate the velocity of something.
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main() {
    double velocity = 0.0; // Using a double because it makes me feel better
    int displacement = 400; // keeping as an int since we are given the value
    int time = 4; // keeping as an int since we are given the value
    velocity = displacement / time; // Calculate velocity
    cout << "The velocity of the object is: " << velocity << " mph." << endl;
    return 0;
}