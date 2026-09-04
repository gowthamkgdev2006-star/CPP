#include<iostream>
using namespace std;

int main()
{
    // Create a dynamic array of 5 integers
    int* number = new int[5];

    for(int i = 0; i < 5; i++)
    {
        number[i] = (i + 1)*10;
    }
    for(int i = 0; i < 5; i++)
    {
        cout << "Element[" << i << "]: " << number[i] << endl;
    }

    return 0;
}