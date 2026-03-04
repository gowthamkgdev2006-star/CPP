// Functions - Factorial using recursion
#include <iostream>
using namespace std;

// Returns long long to support inputs up to 20 before overflow
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a non-negative integer (0-20): ";
    cin >> n;
    if (n < 0 || n > 20) {
        cout << "Please enter a value between 0 and 20." << endl;
        return 1;
    }
    cout << "Factorial of " << n << " = " << factorial(n) << endl;
    return 0;
}
