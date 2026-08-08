#include<iostream>
using namespace std;

int main()
{
    int age;
    char voterId;

    cout << "------------------------------" << endl;
    cout << "     Voting Eligibility       " << endl;
    cout << "------------------------------" << endl;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have a valid voter ID? (Y/N): ";
    cin >> voterId;

    if(age < 18)
    {
        cout << "You are not eligible to vote due to age." << endl;
    }
    else if(voterId == 'Y' || voterId == 'y')
    {
        cout << "You are eligible to vote." << endl;
    }
    else if(voterId == 'N' || voterId == 'n')
    {
        cout << "You are not eligible to vote due to lack of valid voter ID." << endl;
    }
    else
    {
        cout << "Invalid input." << endl;
    }
    
    return 0;
}
