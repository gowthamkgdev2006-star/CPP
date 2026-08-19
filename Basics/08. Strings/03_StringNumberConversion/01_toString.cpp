#include<iostream>
#include<string>
using namespace std;

int main()
{
    int number = 123;

    // Convert integer to string using to_string()
    string text = to_string(number);
    
    cout << "Integer: " << number << endl;
    cout << "String: " << text << endl;

    return 0;
}
