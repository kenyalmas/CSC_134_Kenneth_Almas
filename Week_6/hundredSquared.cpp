/*
@author: Kenneth Almas
@date: 7/5/2026
@description: square every number between 0-100
*/

// Include iostream for input and output operations
#include <iostream>
// using this to set the width of the table to look neater
#include <iomanip>
// Keeping our code clean and readable
using namespace std;

int main() {
    // set start and stop
    int minNum = 0;
    int maxNum = 100;

    // print table header
    cout << " Number  |  Number Squared" << endl;
    cout << "--------------------------------" << endl;

    // use setw() to maintain even spacing with different digits
    for (int i = minNum; i <= maxNum; i++) {
        cout << left << setw(10) << " " << i << i * i << endl;
    }

    return 0;
}
