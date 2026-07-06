/*
@author: Kenneth Almas
@date: 7/5/2026
@description: give a multiplication table for a given integer
*/

// Include iostream for input and output operations
#include <iostream>
// Keeping our code clean and readable
using namespace std;

int main() {
    // initialize our input variable
    int num;

    // get the number
    cout << "enter a number: ";
    cin >> num;

    // start at 0 and iterate through 12 displaying the nums multiplication table
    for (int i = 0; i <= 12; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    // return a 0 to indicate that the function exited cleanly
    return 0;
}
