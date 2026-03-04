// Arrays - Linear Search
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n <= 0 || n > 100) {
        cout << "Please enter a value between 1 and 100." << endl;
        return 1;
    }

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int index = linearSearch(arr, n, key);
    if (index != -1)
        cout << key << " found at index " << index << "." << endl;
    else
        cout << key << " not found in the array." << endl;

    return 0;
}
