#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 3; 
    long long b = 12345678912345;
    float c = 334.230f;
    double d = 14049.304930000;
    string e = "Hello";
    char f = 'A';
    bool g = true;

    cout << "int: " << a << endl;
    cout << "long long: " << b << endl;
    cout << "float: " << c << endl;
    cout << "double: " << d << endl;
    cout << "string: " << e << endl;
    cout << "char: " << f << endl;
    cout << "bool: " << boolalpha << g << endl;

    return 0;
}
