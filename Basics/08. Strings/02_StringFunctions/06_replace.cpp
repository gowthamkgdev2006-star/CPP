#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word = "Hello World!";
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Original string: " << word << endl;
    //replace(index, number of characters to be replaced, new string)
    cout << "After replace: " << word.replace(6, 5, name) << endl;

    return 0;
}