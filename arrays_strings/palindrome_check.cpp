// Strings - Check Palindrome
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str))
        cout << "\"" << str << "\" is a Palindrome." << endl;
    else
        cout << "\"" << str << "\" is not a Palindrome." << endl;

    return 0;
}
