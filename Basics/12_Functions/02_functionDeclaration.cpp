#include<iostream>
using namespace std;

// Function Declaration 
// without declaration, the function cannot be called in main() before its definition.
void greet();

int main()
{
    greet(); // Function Call

    return 0;
}

void greet()
{
    cout << "Hello World" << endl;
}