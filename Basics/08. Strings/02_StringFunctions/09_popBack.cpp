#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word = "Hello World!";

    cout << "Original string: " << word << endl;

    word.pop_back(); // Removes the last character from the string

    // pop_back() = removes one character from the end 
       
    cout << "After pop_back: " << word << endl;

    return 0;
}