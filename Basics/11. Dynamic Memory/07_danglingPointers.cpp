#include<iostream>
using namespace std;

int main()
{
    int* number = new int(50);

    cout << "Value: " << *number << endl;

    delete number;

    // number is now a dangling pointer
    // cout << *number << endl;  // ❌ Undefined behavior

    return 0;
}