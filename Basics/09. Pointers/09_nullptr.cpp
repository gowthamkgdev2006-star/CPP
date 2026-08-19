#include<iostream>
using namespace std;

int main()
{
    int* pointer = nullptr; // Initialize pointer to nullptr

    if(pointer == nullptr)
    {
        cout << "Pointer is null." << endl;
    }
    else
    {
        cout << "Pointer is not null." << endl;
    }

    return 0;
}