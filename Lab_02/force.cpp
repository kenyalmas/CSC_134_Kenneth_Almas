/*
@author: Kenneth Almas
@date: 2024-06-01
@description: Calculate the gravitational force of an object?
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main() {
    double force = 0.0; // Using a double because the answer will be a decimal value 
    int mass = 10; // measured in kg
    double gravity = 9.81; // Gravitational acceleration in m/s^2
    force = mass * gravity; // Calculate force using F = m * a
    cout << "The gravitational force of the object is: " << force << " newtons." << endl;
    return 0;
}