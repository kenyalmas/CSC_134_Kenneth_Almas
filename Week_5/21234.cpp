/*
@author: Kenneth Almas
@date: 2024-26-16
@description: Determine an angle of a right angle triangle from 2 given side lengths
*/

// Include iostream for input and output operations
#include <iostream>
// Keeping our code clean and readable
using namespace std;

int main() {
    // initialize our variable
    double temperature = 0.0;

    // Ask for our magic number...
    while (temperature != 212.34) {
        cout << "Enter the temperature: ";
        cin >> temperature;
    }

    // if we know the password...
    cout << "The temperature has been successfully set, thank you." << endl;

    return 0;
}
