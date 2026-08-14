#include<iostream>
#include<string>
using namespace std;

int main()
{
    string text = "12.03459";

    // stod() converts a string into a double
    double number = stod(text);

    cout << "String: " << text << endl;
    cout << "Double: " << number << endl;
  
    return 0;
}