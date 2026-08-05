#include<iostream>
using namespace  std;

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;

     //increment operator
    a++; //post-increment
    cout << "Value of a after post-increment: " << a << endl; 
    ++b; //pre-increment
    cout << "Value of b after pre-increment: " << b << endl;

    //decrement operator
    c--; //post-decrement
    cout << "Value of c after post-decrement: " << c << endl;
    --d; //pre-decrement
    cout << "Value of d after pre-decrement: " << d << endl;

    return 0;
}
