#include<iostream>
using namespace std;


void greet();

int main()
{
    greet(); // Function Call

    return 0;
}

// Function Definition
// Defines what the function does when it is called.
void greet()
{
    cout << "Hello World" << endl;
}