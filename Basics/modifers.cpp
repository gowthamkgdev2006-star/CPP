#include<iostream>
using namespace std;

int main()
{
    short a = 10;
    long b = 100000L;
    signed int c = -1000;
    unsigned int d = 2000; // unsigned int can only hold positive values

    cout << "short: " << a << endl;
    cout << "long: " << b << endl;  
    cout << "signed int: " << c << endl;
    cout << "unsigned int: " << d << endl;

    return 0;
}
