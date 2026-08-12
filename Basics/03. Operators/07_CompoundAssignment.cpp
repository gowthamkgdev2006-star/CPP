#include<iostream>
using namespace std;

int main()
{
    int number = 10;

    // number = number + 2; 10 + 2 = 12
    number += 2;
    cout << "After adding 2: " << number << endl;

    // number = number - 2; 12 - 2 = 10
    number -= 2;
    cout << "After subtracting 2: " << number << endl;

    // number = number * 2; 10 * 2 = 20
    number *= 2;
    cout << "After multiplying by 2: " << number << endl;

    // number = number / 2; 20 / 2 = 10
    number /= 2;
    cout << "After dividing by 2: " << number << endl;

    // number = number % 2; 10 % 2 = 0
    number %= 2;
    cout << "After taking remainder when divided by 2: " << number << endl;

    return 0;
}
