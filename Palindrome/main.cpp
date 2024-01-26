#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

// Check if 'str' is a palindrome using 'std::equal'.
// It compares the first half of the string (from start to middle) with the second half in reverse order.
// 'str.begin()' points to the start of the string, 'str.begin() + str.size()/2' points to the middle,
// and 'str.rbegin()' provides a reverse iterator starting from the end of the string.
// (equal() function assumes that the second range is as long as the first range)
// If the first half and the reversed second half are equal, the string is a palindrome.

bool isPalindrome(const string& str) {
    return equal(str.begin(), str.begin() + str.size()/2, str.rbegin());
}

int main() {
    string input;

    cout << "Please enter a string: ";
    getline(cin, input);

    // Transforming the string to lowercase for case-insensitive comparison.
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    // Calling isPalindrome to check if the input string is a palindrome.
    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome!" << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome!" << endl;
    }

    return 0;
}

