#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word = "Hello World!";

    cout << "Original string: " << word << endl;
  
    word.clear(); // Clears the entire string, making it empty
    cout << "After clear: " << word << endl;
    cout << "Is the string empty?: " << (word.empty() ? "Yes" : "No") << endl; // Checks if the string is empty

    return 0;
}