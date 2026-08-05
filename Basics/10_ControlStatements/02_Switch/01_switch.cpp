#include<iostream>
using namespace std;

int main()
{
    int num = 2;

    switch (num)
    { 
        // Switch statement to check the value of num 
        // Executes the matching case based on the value of num.       
        case 1:
            cout << "The number is 1" << endl;
            break;
        case 2:
            cout << "The number is 2" << endl;
            break;
        case 3:
            cout << "The number is 3" << endl;
            break;
        case 4:
            cout << "The number is 4" << endl;
            break;
        default:
            cout << "The number is not between 1 and 4" << endl;
    }

    return 0;
}
