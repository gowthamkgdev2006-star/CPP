#include<iostream>
#include<string>
using namespace std;

int main()
{
    //cout → Normal information
    // cerr → Error messages 🚨

    int phoneNumber;
    cout << " Enter your phone number: ";
    cin >> phoneNumber;
    int length = to_string(phoneNumber).length(); // Get the length of the phone number

    if(length < 10)
    {
        cerr << "Error: Phone number is invalid." << endl;
    }
    else if(length == 10)
    {
        cout << "Phone number is valid." << endl;
    }
    else
    {
        cerr << "Error: Phone number is too long." << endl;
    }

    return 0;
}
