#include<iostream>
using namespace std;

int main()
{
    int number = 10;
    int number2 = 20;

    int *pointer1 = &number;
    int *pointer2 = &number;
    int *pointer3 = &number2;

    int *pointers[3] = {pointer1, pointer2, pointer3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                continue;

            if (pointers[i] == pointers[j])
            {
                cout << "Pointer " << i + 1 << " and Pointer " << j + 1
                     << " point to the same memory address." << endl;
            }
            else
            {
                cout << "Pointer " << i + 1 << " and Pointer " << j + 1
                     << " point to different memory addresses." << endl;
            }
        }
    }
}