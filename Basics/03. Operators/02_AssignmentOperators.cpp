#include<iostream>
using namespace  std;

int main()
{
    // Assignment
    int a = 10;
    cout << "Assignment: " << a << endl; // a = 10

    //Addition Assignment
    cout << "Addition Assignment: " << (a += 5) << endl; // a = a + 5

    //Subtraction Assignment
    cout << "Subtraction Assignment: " << (a -= 3) << endl; // a = a - 3

    //Multiplication Assignment
    cout << "Multiplication Assignment: " << (a *= 2) << endl; // a = a * 2

    //Division Assignment
    cout << "Division Assignment: " << (a /= 4) << endl; // a = a / 4

    //Modulus Assignment
    cout << "Modulus Assignment: " << (a %= 3) << endl; // a = a % 3

    return 0;
}
