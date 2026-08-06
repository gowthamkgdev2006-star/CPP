#include<iostream>
using namespace std;

void add(int a, int b)
{
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
}

int main()
{
    add(5, 10); // Function Call with parameters 5 and 10
    return 0;
}
