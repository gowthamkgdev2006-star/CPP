#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word = "Hello World";
    
    cout << "Word: " << word << endl;
    
    //space is also counted as a character
    cout << "Length: " << word.length() << endl;
    
    return 0;
}
