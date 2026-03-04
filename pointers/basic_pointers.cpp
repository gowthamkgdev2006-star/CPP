// Pointers - Basic Pointer Usage
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;

    cout << "Value of x    : " << x << endl;
    cout << "Address of x  : " << &x << endl;
    cout << "ptr holds addr: " << ptr << endl;
    cout << "Value via ptr : " << *ptr << endl;

    *ptr = 20;
    cout << "After *ptr=20 : x = " << x << endl;

    return 0;
}
