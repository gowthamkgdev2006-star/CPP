#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word = "Hello";

    cout << "Before append: " << word << endl;

    // append() adds a string to the end of the existing string
    word.append(" World!");

    cout << "After append: " << word << endl;

    return 0;
}