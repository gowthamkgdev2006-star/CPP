// Strings - Reverse a String
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    cout << "Original : " << str << endl;
    cout << "Reversed : " << reversed << endl;

    return 0;
}
