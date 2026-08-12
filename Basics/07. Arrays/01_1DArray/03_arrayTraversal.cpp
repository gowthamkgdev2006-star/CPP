#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    //Traversal: visiting each element one by one
    for(int i = 0; i < 5; i++)
    {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}
