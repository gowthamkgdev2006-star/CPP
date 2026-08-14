#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word = "Hello World!";

    if(word.find("World") != string::npos)  
    //npos is a constant that indicates that there is no position 
    //where the substring was found
    {
        cout << "World found at position: " << word.find("World") << endl;
    }
    else
    {
        cout << "World not found." << endl;
    }

    return 0;
}