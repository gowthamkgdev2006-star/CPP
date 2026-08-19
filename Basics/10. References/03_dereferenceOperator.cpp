#include<iostream>
using namespace std;

int main()
{
    int number = 10;

    // Pointer stores the address of number
    int* pointer = &number;

    cout << "Number: " << number <<endl;
    cout << "Pointer: "  << pointer <<endl;

    // * (Dereference Operator) accesses the value stored at the address
    cout << "Value through pointer: " << *pointer <<endl;

    return 0;
}