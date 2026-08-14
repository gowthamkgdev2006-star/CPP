#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word = "Hello World!";
    
    cout << "Original string: " << word << endl;

    cout << "Substring from index 6: " << word.substr(6) << endl; // Extracts substring starting from index 6
    cout << "Substring from index 0 to 4: " << word.substr(0, 5) << endl; // Extracts substring from index 0 to 4 (length 5)

    return 0;
}