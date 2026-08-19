#include<iostream>
using namespace std;

int main()
{
    int* pointer = new int(10);

    cout << "Value before delete: " << *pointer << endl;
    cout << "Address before delete: " << pointer << endl;

    delete pointer; // Memory is released

    // Pointer still holds the old address, but the object no longer exists
    cout << "Pointer is now dangling: " << pointer << endl;

    // Do not dereference the dangling pointer
    // cout << *pointer << endl; // ❌ Undefined behavior

    return 0;
}