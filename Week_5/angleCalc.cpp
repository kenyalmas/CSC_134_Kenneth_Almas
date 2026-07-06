/*
@author: Kenneth Almas
@date: 2024-26-16
@description: Determine an angle of a right angle triangle from 2 given side lengths
*/

// Include iostream for input and output operations
#include <iostream>
// Using the cmath library for the atan2 functionality
#include <cmath>
// Keeping our code clean and readable
using namespace std;

int main() {
    // we were given these values
    double x = 3.0;
    double y = 4.0;
    // Hypotenuse variable holder
    double c;
    // Seperate radian and degree values to help track in debugging
    double thetaRadians;
    double thetaDegrees;
    // I practice this every pi day...
    const double PI = 3.14159265359;

    // using the pow() looks cleaner to me than just multiplying
    // a variable by itself multiple times although it might be less performant
    c = sqrt(pow(x, 2) + pow(y, 2));
    thetaRadians = atan2(y, x);
    thetaDegrees = thetaRadians * 180.0 / PI;

    // The given values equal 53.1301 because trig is hard and doesn't care about humans
    // I could have just set this in the check but I chose to use fabs() to find the
    // absolute value to keep from checking upper and lower bounds and have
    // a function as long as this comment
    if (fabs(thetaDegrees - 53.13) < 0.01) {
        cout << "This is a 3-4-5 triangle" << endl;
      // This is never called with hard-coded values
    } else {
        cout << "This is NOT a 3-4-5 triangle" << endl;
    }

    return 0;
}
