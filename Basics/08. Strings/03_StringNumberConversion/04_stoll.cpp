#include<iostream>
#include<string>
using namespace std;

int main()
{
    string text = "123456789012345";

    // stoll() converts a string into a long long integer
    long long number = stoll(text);

    cout << "String: " << text << endl;
    cout << "Long long integer: " << number << endl;
  
    return 0;
}
