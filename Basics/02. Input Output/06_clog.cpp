#include<iostream>
#include<string>
using namespace std;

int main()
{
    // cout → Normal program output
    // cerr → Error messages
    // clog → Log / diagnostic messages

    int inputpassword;
    int password = 123456; // Example password

    cout << "Enter your password: ";
    cin >> inputpassword;

    int passwordLength = to_string(password).length(); // Number of characters in the password

    if(inputpassword == password)
    {
        cout << "Password is correct." << endl;
    }
    else if(to_string(inputpassword).length() != passwordLength)
    {
        clog << "Log: Password has incorrect length." << endl;
    }
    else 
    {
        cerr << "Error: Incorrect password." << endl;
    }

    return 0;
}
