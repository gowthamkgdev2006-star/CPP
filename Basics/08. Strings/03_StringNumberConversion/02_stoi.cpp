#include<iostream>
#include<string>
using namespace std;

int main()
{
    string text1 = "123";
    string text2 = "456num";
    // string text3 = "num789"; 

    // Convert string to integer using stoi()
    int number1 = stoi(text1);
    int number2 = stoi(text2);
    // int number3 = stoi(text3); ❌throws invalid_argument exception

    cout << "String: " << text1 << endl;
    cout << "Integer: " << number1 << endl;
    cout << "String: " << text2 << endl;
    cout << "Integer: " << number2 << endl;

    return 0;
}
