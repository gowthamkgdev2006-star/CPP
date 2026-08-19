#include<iostream>
using namespace std;

void changePointer(int** pointerToPointer)
{
    static int newValue = 20;
    *pointerToPointer = &newValue; // Change the pointer to point to a new value
}

int main()
{
    int number = 10;

    int* pointer = &number;
    
    cout << "Before: " << *pointer << endl;

    changePointer(&pointer); // Pass the address of the pointer to the function

    cout << "After: " << *pointer << endl; // This will print the new value
    
    return 0;
}