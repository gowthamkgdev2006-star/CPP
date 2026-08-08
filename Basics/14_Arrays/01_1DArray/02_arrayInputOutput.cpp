#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "Enter 5 elements: " << endl;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
     
    cout << "Element at index " << 0 << ": " << arr[0] << endl;
    cout << "Element at index " << 1 << ": " << arr[1] << endl;
    cout << "Element at index " << 2 << ": " << arr[2] << endl;
    cout << "Element at index " << 3 << ": " << arr[3] << endl;
    cout << "Element at index " << 4 << ": " << arr[4] << endl;
    
    return 0;
}
