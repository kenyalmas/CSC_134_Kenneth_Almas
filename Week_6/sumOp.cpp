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
    // initialize given variables
    int sumOp = 0;
    int adder = 10;

    // This is what I read from the prompt but I was confused wether
    // or not you wanted a running sum of the additions so I included
    // the running sum in a comment
    for (int i = 0; i < 50; i++) {
      //sumOp += i + adder;
        sumOp = i + adder;
        cout << sumOp << endl;
    }

    return 0;
}
