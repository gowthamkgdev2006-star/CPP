#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    
    cin.ignore();// Ignore the newline character left in the input buffer after reading age

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Your name: " << name << endl;
    cout << "Your age: " << age << endl;


    return 0;
}
