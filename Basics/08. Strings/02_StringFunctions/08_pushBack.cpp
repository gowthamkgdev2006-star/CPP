#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word = "Hello World";

    cout << "Original string: " << word << endl;

    word.push_back('!'); // Adds a character at the end of the string
    
    // append() = adds a string
    // push_back() = adds a character

    cout << "After push_back: " << word << endl;

    return 0;
}