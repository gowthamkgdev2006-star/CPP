#include<iostream>
using namespace std;

int main()
{
    int number = 10;

    // Pointer to const: cannot modify the value through the pointer
     const int*  pointer = &number;

    cout << "Original number: " << number << endl;
    cout << "Value through pointer: " << *pointer << endl;

    // *pointer = 20; // ❌ Error: cannot modify the value through this pointer

    number = 20; // ✅ The original variable can still be modified

    cout << "\nModified number: " << number << endl;
    cout << "Value through pointer: " << *pointer << endl;

    return 0;
}