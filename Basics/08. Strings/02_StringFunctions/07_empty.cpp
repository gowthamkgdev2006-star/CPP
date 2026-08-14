#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;

    // Returns true (1) if the string is empty, false (0) otherwise
    cout << "The string is empty: " << word.empty() << endl;  
    
    if(word.empty())
    {
        cout << "The string is empty." << endl;
    }
    else
    {
        cout << "The string is not empty." << endl;
    }

    cout << "Enter a string: ";
    cin >> word; 
    
     

    if(word.empty())
    {
        cout << "The string is empty." << endl;
    }
    else
    {
        cout << "The string is not empty." << endl;
    }

    cout << "The string is empty: " << word.empty() << endl;    

    return 0;
}