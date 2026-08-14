#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word1 = "Hello";
    string word2 = "World";

    cout << "Before swap: " << endl;
    cout << "word1: " << word1 << endl;
    cout << "word2: " << word2 << endl;

    // Swaps the contents of word1 and word2
    word1.swap(word2);

    cout << "\nAfter swap: " << endl;
    cout << "word1: " << word1 << endl; 
    cout << "word2: " << word2 << endl;

    return 0;
}