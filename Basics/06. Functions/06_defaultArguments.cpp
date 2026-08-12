#include<iostream>
using namespace std;

int add(int a, int b = 5)
{
    int sum = a + b;
    return sum;
}

int main()
{
    cout << "Sum: " << add(5) << endl;      // Uses the default value of b
    cout << "Sum: " << add(5, 20) << endl;  // Uses the provided value of b

    return 0;
}
