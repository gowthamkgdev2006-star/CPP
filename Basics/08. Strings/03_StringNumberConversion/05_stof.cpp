#include<iostream>
#include<string>
using namespace std;

int main()
{
    string text = "12.034";

    // stof() converts a string into a float
    float number = stof(text);

    cout << "String: " << text << endl;
    cout << "Float: " << number << endl;
  
    return 0;
}