#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word1 = "Hello";
    string word2 = "hello";

    // Comparing two strings
    if (word1 == word2) 
    {
        cout << "The strings are equal." << endl;
    } 
    else 
    {
        cout << "The strings are not equal." << endl;
    }

    return 0;
}

