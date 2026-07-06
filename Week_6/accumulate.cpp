/*
@author: Kenneth Almas
@date: 7/5/2026
@description: iterate a counter to 100
*/

// Include iostream for input and output operations
#include <iostream>
// Keeping our code clean and readable
using namespace std;

int main() {
    // initialize accumulator to 0
    int acc = 0;

    // start at 0 and iterate 100 times
    for (int i = 0; i < 100; i++) {
      acc += 1;
    }

    // print out the number the accumulator reached
    cout << "The accumulator value is: " << acc << endl;

    // return a 0 to indicate that the function exited cleanly
    return 0;
}
