#include<iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int* pointer =  numbers;

    // Accessing array elements using the pointer
    for(int i = 0; i < 5; i++)
    {
        cout << "Value of element " << i + 1 << ": " << *(pointer + i) << endl;  
    }

    return 0;
}