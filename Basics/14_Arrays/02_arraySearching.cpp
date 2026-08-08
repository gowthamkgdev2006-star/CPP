#include<iostream>
using namespace std;

int main()
{
    int arr[5] = { 110, 111, 123, 125, 310 };
    int searchElement;

    cout << "Enter the element to search: ";
    cin >> searchElement;

    bool found = false;

    // Search for the value by traversing the array
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == searchElement)
        {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        } 
    }
    if(!found)
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
