#include<iostream>
using namespace std;

// A void function performs a task but does not return a value.
int add(int a, int b) // a = 5, b = 10
{
    int sum = a + b; // sum = 5 + 10 = 15
    return sum; 
}

int main()
{
    int result = add(5, 10);
    cout << "The sum is: " << result << endl; // Prints the returned value.
    return 0;
}
