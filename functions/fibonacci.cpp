// Functions - Fibonacci Series
#include <iostream>
using namespace std;

void fibonacci(int n) {
    if (n <= 0) {
        cout << "Please enter a positive number of terms." << endl;
        return;
    }
    int a = 0, b = 1;
    cout << "Fibonacci series up to " << n << " terms:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a;
        if (i < n - 1) cout << ", ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    fibonacci(n);
    return 0;
}
