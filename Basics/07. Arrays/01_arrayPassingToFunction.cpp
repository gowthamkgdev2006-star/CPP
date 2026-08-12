#include<iostream>
using namespace std;

// Function to print the elements of an array
void printArray(int arr[], int size)
{
    cout <<"Array elements are: " << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Element " << "[" << i << "]: " << arr[i] << " " << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    //Passing array and its size to the function
    printArray(arr, 5);

    return 0;
}
