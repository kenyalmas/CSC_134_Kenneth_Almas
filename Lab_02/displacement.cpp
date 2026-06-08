/*
@author: Kenneth Almas
@date: 2024-06-08
@description: Calculate displacement of something.
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main() {
    double displacement = 0.0; // Using a double because it makes me feel better
    int velocity = 80; // keeping as an int since we are given the value
    int time = 2; // keeping as an int since we are given the value
    displacement = velocity * time; // Calculate displacement
    cout << "The distance something travelled is: " << displacement << " miles." << endl;
    return 0;
}