#include<iostream>
using namespace std;

int main()
{
    int arr[2][2][3];

    cout << "Enter 12 elements: " << endl;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                cin >> arr[i][j][k];
            }
        }
    }
    cout << "\nThe elements of the 3D array are: " << endl;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                cout << "Element at [" << i << "][" << j << "][" << k << "]: " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
