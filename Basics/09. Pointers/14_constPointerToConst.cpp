#include<iostream>
using namespace std;

int main()
{
    int number1 = 10;
    int number2 = 20;
   
    const int* const pointer = &number1;

    cout << "Number1: " << number1 << endl;
    cout << "Value through pointer: " << *pointer << endl;

    // pointer = &number2; // ❌ Cannot change the address stored in the pointer
    // *pointer = 30;      // ❌ Cannot modify the value through the pointer
    
    return 0;
}