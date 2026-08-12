#include<iostream>
using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}
int add(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}

int main()
{
    cout << add(5, 10) << endl; // Calls the first version of add
    cout << add(5, 10, 15) << endl; // Calls the second version of add

    return 0;
}
