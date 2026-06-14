/*
@author: Kenneth Almas
@date: 2024-06-12
@description: Print a character string to the console
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main(void) {
    char message[] = { 'H', 'i', '!' };

    cout << message[0] << message[1] << message[2] << '\n';
    return 0;
}
