/*
@author: Kenneth Almas
@date: 7/5/2026
@description: use a loop to count to 10
*/

// Include iostream for input and output operations
#include <iostream>
// Keeping our code clean and readable
using namespace std;

int main() {
    // start at 0 and iterate through the loop until the counter is larger than 10
    for (int i = 0; i <= 10; i++) {
        // use the cout object to display to the console
        cout << i << endl;
    }
    // return a 0 to indicate that the function exited cleanly
    return 0;
}
