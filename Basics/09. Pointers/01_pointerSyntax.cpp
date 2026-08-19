#include<iostream>
using namespace std;

int main()
{
    int number = 10;

    // Pointer stores the memory address of another variable
    int* pointer = &number;

    cout << "Number: " << number <<endl;
    cout << "Pointer: "  << pointer <<endl;

    return 0;
}
