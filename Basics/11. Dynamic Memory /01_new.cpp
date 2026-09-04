#include<iostream>
using namespace std;

int main()
{
    // new creates an integer in dynamic memory
    int* pointer = new int;

    // Store a value in the dynamically allocated memory
    *pointer = 10;

    cout << "Value: " << *pointer << endl;
    cout << "Address: " << pointer << endl;

    // Release the dynamically allocated memory
    delete pointer; 

    return 0;
}
