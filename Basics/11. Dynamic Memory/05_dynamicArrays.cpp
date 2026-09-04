#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the dynamic array: ";   
    cin >> size;

    int* number = new int[size];

    for(int i = 0; i < size; i++)
    {
        number[i] = (i + 1) * 10;
    }
    for(int i = 0; i < size; i++)
    {
        cout << "Element[" << i << "]: " << number[i] << endl;
    }

    delete[] number; 
    
    return 0;
}