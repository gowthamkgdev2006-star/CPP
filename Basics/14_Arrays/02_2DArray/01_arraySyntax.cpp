#include<iostream>
using namespace std;

int main()
{
    // 2 rows and 3 columns
    int arr[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing elements using row and column index
    cout << "Element at [0][0]: " << arr[0][0] << endl;
    cout << "Element at [0][1]: " << arr[0][1] << endl;
    cout << "Element at [0][2]: " << arr[0][2] << endl;
    cout << "Element at [1][0]: " << arr[1][0] << endl;
    cout << "Element at [1][1]: " << arr[1][1] << endl;
    cout << "Element at [1][2]: " << arr[1][2] << endl;

    return 0;
}
