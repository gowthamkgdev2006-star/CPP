#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word = "Hello World!";

    cout << "Original string: " << word << endl;
    //erase(index, number of characters to be erased) 
    cout <<"After erase: " <<word.erase(5, 6) << endl;

    return 0;
}