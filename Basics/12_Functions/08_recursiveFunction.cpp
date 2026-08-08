#include<iostream>
using namespace std;

// A recursive function calls itself until a base condition is met.
int sum(int a)
{
    // Base Case
    // Stops the recursion when a becomes 0.
    if(a == 0)
    {
        return 0;
    }
    return a + sum(a - 1);
}
int main()
{
    cout << "Sum of first 5 numbers: " << sum(5) << endl;
    return 0;
}
