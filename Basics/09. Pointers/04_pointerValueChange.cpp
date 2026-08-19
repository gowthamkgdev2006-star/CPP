#include<iostream>
using namespace std;

int main()
{
    int number = 10;
    int* pointer = &number;

    cout << "Original number: " << number << endl;
    cout << "Value through pointer: " << *pointer << endl;    
    *pointer = 20; // Changing the value of number through pointer

    cout << "\nModified number: " << number << endl;
    cout << "Value through pointer: " << *pointer << endl;

    return 0;
}