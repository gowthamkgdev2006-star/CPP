#include<iostream>
#include<string>
using namespace std;

int main()
{
    string text = "12.03456";

    // stold() converts a string into a long double
    long double number = stold(text);

    cout << "String: " << text << endl;
    cout << "Long double: " << number << endl;
  
    return 0;
}