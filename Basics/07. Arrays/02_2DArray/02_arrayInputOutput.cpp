#include<iostream>
using namespace std;

int main()
{
    int arr[2][3];
    // Input elements into the 2D array
    cout << "Enter 6 elements: " << endl;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Output elements of the 2D array
    cout << "The elements of the 2D array are: " << endl;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Element at [" << i << "][" << j << "]: " << arr[i][j] << endl;
        }
    }

    return 0;
}
