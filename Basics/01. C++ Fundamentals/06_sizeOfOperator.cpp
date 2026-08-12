#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Size of data types in C++
    cout << "Size of int        : " << sizeof(int) << " bytes" << endl;
    cout << "Size of long long  : " << sizeof(long long) << " bytes" << endl;
    cout << "Size of float      : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double     : " << sizeof(double) << " bytes" << endl;
    cout << "Size of char       : " << sizeof(char) << " byte" << endl;
    cout << "Size of bool       : " << sizeof(bool) << " byte" << endl;
    cout << "Size of string     : " << sizeof(string) << " bytes" << endl;
    
    //Size of variable in C++
    int a = 100;

    cout << "Size of variable a : " << sizeof(a) << " bytes" << endl;

    return 0;
}
