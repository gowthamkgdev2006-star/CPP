#include<iostream>
using namespace std;

int main()
{
    int number1 = 10;
    int number2 = 20;

    int* const pointer = &number1;
    //pointer = &number2; // ❌ Error: cannot change the address stored in a const pointer

    cout << "Original number1: " << number1 << endl;

    // The value can still be changed through the pointer
    *pointer = 30; 
    cout << "Modified number1: " << number1 << endl;

    //pointer = &number2; // ❌ Error: cannot change the address stored in the pointer

    return 0;
}