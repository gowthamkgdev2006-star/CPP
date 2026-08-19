#include<iostream>
using namespace std;

int main()
{
    int numbers[3] = {10, 20, 30};
    int *pointer = numbers; 

    // Pointer initially points to the first element
    cout << "Value of first element: " << *pointer << endl;

    pointer++; // Move pointer to the next integer
    cout << "Value of second element: " << *pointer << endl;

    pointer++;
    cout << "Value of third element: " << *pointer << endl;

    return 0;

}