#include<iostream>
using namespace std;

int main()
{
    int number = 10;

    // & (Address-of Operator) gives the memory address of a variable
    
    cout << "Number: " << number <<endl;
    cout << "Address of Number: "  << &number <<endl;

    return 0;
}