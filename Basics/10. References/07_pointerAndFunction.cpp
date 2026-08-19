#include<iostream>
using namespace std;

void modifyValue(int* ptr) {
    *ptr = 20; // Modify the value at the address pointed to by ptr
}

int main()
{
    int number = 10;
    int* pointer = &number;

    cout << "Original number: " << number << endl;

    modifyValue(pointer); // Pass the pointer to the function
    cout << "Modified number: " << number << endl;

    return 0;
}