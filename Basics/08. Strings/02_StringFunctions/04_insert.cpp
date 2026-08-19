#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word = "Hello!";

    cout << "Original string: " << word << endl;

    // insert() adds a string at a specified index in the existing string
    cout << "After insert: " << word.insert(5, ", World") << endl;

    return 0;

}