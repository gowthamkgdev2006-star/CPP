// If-Else Conditions
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << number << " is Positive." << endl;
    } else if (number < 0) {
        cout << number << " is Negative." << endl;
    } else {
        cout << "The number is Zero." << endl;
    }

    return 0;
}
