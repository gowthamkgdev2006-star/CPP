#include<iostream>
using namespace std;

int main()
{
    // 3D array: 2 layers, 2 rows, 3 columns
    int arr[2][2][3] = 
    {
        {
            {1, 2, 3},
            {4, 5, 6}
        },

        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // Accessing elements using layer, row and column
    cout <<"Element at [0][0][0]: " << arr[0][0][0] << endl;
    cout <<"Element at [0][1][2]: " << arr[0][1][2] << endl;
    cout <<"Element at [0][0][1]: " << arr[0][0][1] << endl;
    cout <<"Element at [1][0][2]: " << arr[1][0][2] << endl;
    cout <<"Element at [1][1][0]: " << arr[1][1][0] << endl;
    cout <<"Element at [1][1][1]: " << arr[1][1][1] << endl;
}
