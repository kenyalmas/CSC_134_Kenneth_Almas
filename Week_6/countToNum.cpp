/*
@author: Kenneth Almas
@date: 7/5/2026
@description: count up to a given integer
*/

// Include iostream for input and output operations
#include <iostream>
// Keeping our code clean and readable
using namespace std;

int main() {
    // initialize our input variable
    int num

    // get the number
    cout << "enter a number: ";
    cin >> num

    // start at 0 and iterate through the loop until the counter reaches the given value
    for (int i = 0; i < num; i++) {
        // use the cout object to display the counter to the console
        cout << i << endl;
    }
    // return a 0 to indicate that the function exited cleanly
    return 0;
}
