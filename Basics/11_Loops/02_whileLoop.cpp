#include<iostream>
using namespace std;

int main()
{
    int n = 1; // initialization

    while(n <= 10) // condition
    {
        cout << n << endl;
        // Without n++, the condition always remains true,
        // causing an infinite loop.
        n++; // increment
    }
    return 0;
}
