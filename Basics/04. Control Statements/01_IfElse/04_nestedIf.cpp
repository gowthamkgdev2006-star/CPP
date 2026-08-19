#include<iostream>
using namespace std;

int main()
{
    int age = 20;
    bool voterId = true;

    //Check if the person is at least 18 years old.
    if(age >= 18) 
    {
        // Check if the person has a voter ID.
        if(voterId)
        {
            cout << "You are eligible to vote." << endl;
        }
        else
        {
            cout << "You are not eligible to vote. You need a voter ID." << endl;
        }
    }
    else
    {
        cout << "You are not eligible to vote. You must be at least 18 years old." << endl;
    }

    return 0;
}
