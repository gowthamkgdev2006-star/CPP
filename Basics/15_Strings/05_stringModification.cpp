#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word = "Hello";

    cout << "Original Word: " << word << endl;
   
    // Modifying the string by changing the first character     
    word[0] = 'h';

    cout << "Modified Word: " << word << endl;

    return 0;
}

 
