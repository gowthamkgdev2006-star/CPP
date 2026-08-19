#include<iostream>
using namespace std;

void greet()
{
    cout << "Hello from greet function!" << endl;
}

int main()
{
    void (*pointer)() = &greet;

    // Calling the function using the function pointer
    pointer();

    return 0;
}