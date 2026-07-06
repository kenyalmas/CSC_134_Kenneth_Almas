/*
@author: Kenneth Almas
@date: 2024-06-19
@description: determine if a character is a vowel or consonant
*/

// Include iostream for input and output operations
#include <iostream>
// use std to keep typing minimal
using namespace std;

int main(void) {
    char letter;
    // I made an array of vowels to check against with a for loop because it was easier
    char vowels[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    bool isVowel = false; // using a bool to check after loop

    cout << "Enter a character: ";
    cin >> letter;

    // confirm that we were given an actual alphabetical character
    if (!((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))) {
        cout << "Invalid input. We're not playing those games today.";
        return 0;
    }

    // funny catch for QA
    if (letter == 'y' || letter == 'Y'){
        cout << "Y is sometimes a vowel but it it hard to tell in this context.";
        return 0;
    }

    // iterate through the array to check against vowels
    for (int i = 0; i < 10; i++) {
        if (letter == vowels[i]) {
            isVowel = true;
            break;
        }
    }

    // check bool to choose which message to display
    if (isVowel) {
        cout << letter << " is a vowel." << endl;
    } else {
        cout << letter << " is a consonant." << endl;
    }

    return 0;
}
