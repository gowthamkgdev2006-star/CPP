#include <iostream>
using namespace std;

int main()
{
    // type casting int to char
    int a = 65;
    char b = static_cast<char>(a); // Type casting int to char

    cout << "The character representation of " << a << " is: " << b << endl;

    // type casting double to int
    double c = 9.78;
    int d = static_cast<int>(c); // Type casting double to int

    cout << "The integer representation of " << c << " is: " << d << endl;

    // type casting int to bool
    bool e = static_cast<bool>(a); // Type casting int to bool
    cout << "The boolean representation of " << a << " is: " << e << endl;

    return 0;
    
}   
