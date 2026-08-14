#include<iostream>
#include<string>
using namespace std;

int main()
{
    string text = "123456789";

    // stol() converts a string into a long integer
    long number = stol(text);

    cout << "String: " << text << endl;
    cout << "Long integer: " << number << endl;
  
    return 0;
}
