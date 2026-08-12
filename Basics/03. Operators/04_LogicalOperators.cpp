#include<iostream>
using namespace  std;

int main()
{
    int a = 10, b = 20;
    //And operator
    cout << "And operator: " << (a && b) << endl;
    /*
    A  B  A && B
    0  0     0
    0  1     0
    1  0     0
    1  1     1
    */

    //Or operator
    cout << "Or operator: " << (a || b) << endl;
    /*
    A  B  A || B
    0  0     0
    0  1     1
    1  0     1
    1  1     1
    */

    //logical Not operator
    cout << "Logical Not operator: " << (!a) << endl;
    /*
    A  !A
    0   1
    1   0
    */

    //0 = false, 1 = true

    return 0;
}
