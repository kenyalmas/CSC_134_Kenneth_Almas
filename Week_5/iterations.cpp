/*
@author: Kenneth Almas
@date: 2024-26-16
@description: Count to 100
*/

// Include iostream for input and output operations
#include <iostream>
// Keeping our code clean and readable
using namespace std;

int main() {
    // initialize counter
    int counter = 0;

    // Count to 100
    while (counter < 100) {
        counter++;
    }

    cout << "The loop completed " << counter << " iterations." << endl;

    return 0;
}
