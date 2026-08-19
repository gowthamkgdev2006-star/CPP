#include<iostream>
using namespace std;

int main()
{
    // A reference is another name for the same memory location as number
    int number = 10;
    int& reference = number; // reference to number

    cout << "Number: " << number << endl;
    cout << "Reference: " << reference << endl;

    return 0;
}
