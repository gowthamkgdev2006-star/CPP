#include <iostream>   // library used for input and output
using namespace std;  // allows us to use cout and cin without std::

int main() {

    int age;            // variable to store user's age
    bool citizen;       // variable to store if the person is a citizen (0 or 1)
    bool registered;    // variable to store if the person is registered to vote

    // Ask user to enter age
    cout << "Enter your age\n";
    cin >> age;   // user input is stored in age

    // Ask if the user is a citizen
    cout << "Are you a citizen? Yes(0) or No(1)\n";
    cin >> citizen;  // store the answer

    // Ask if the user is registered to vote
    cout << "Did you register? Yes(0) or No(1)\n";
    cin >> registered;  // store the answer

    // Check all conditions required to vote
    if(age >= 18 && citizen == 0 && registered == 0)
    {
        // If age is 18 or more AND citizen is yes AND registered is yes
        cout << "You can vote!";
    }
    else if(age < 18)
    {
        // If age is less than 18
        cout << "You are not old enough to vote.";
    }
    else if(citizen == 1)
    {
        // If the person is not a citizen
        cout << "You are not eligible to vote.";
    }
    else if(registered == 1)
    {
        // If the person is not registered
        cout << "You need to register first.";
    }
    else
    {
        // If none of the conditions match
        cout << "You have not met the requirements.";
    }

    return 0;  // ends the program
}
