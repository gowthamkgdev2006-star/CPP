#include<iostream>
using namespace std;

int main()
{
    // Allocate memory dynamically
    int* pointer = new int(10);

    cout << "Value before delete: " << *pointer << endl;

    // Release the dynamically allocated memory
    delete pointer;

    // Pointer should no longer be used after delete
    //*pointer = 20; // ❌ Don't do this after delete
    pointer = nullptr;

    cout << "Memory has been released." << endl;

    return 0;
}   