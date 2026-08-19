#include<iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int* pointer1 = &numbers[1];
    int* pointer2 = &numbers[4];

    // Subtracting pointers gives the distance between their positions in the same array
    cout << "Pointer 2 - Pointer 1 index: " << pointer2 - pointer1 << endl; 
    cout << "Pointer 2 - Pointer 1 value: " << *pointer2 - *pointer1 << endl;

    return 0;
}