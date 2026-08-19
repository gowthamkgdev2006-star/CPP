#include<iostream>
using namespace std;

int main()
{
    int a = 5; // 0101 in binary
    int b = 3; // 0011 in binary

    // Bitwise AND(&) Operation
    cout << "Bitwise AND: " << (a & b) << endl; // 0101 & 0011 = 0001 → 1 

    // Bitwise OR(|) Operation
    cout << "Bitwise OR: " << (a | b) << endl; // 0101 | 0011 = 0111 → 7

    // Bitwise XOR(^) Operation
    cout << "Bitwise XOR: " << (a ^ b) << endl; // 0101 ^ 0011 = 0110 → 6

    // Bitwise NOT(~) Operation
    cout << "Bitwise NOT: " << (~a) << endl; // ~0101 = 1010 → -6 (in two's complement)

    // Left Shift(<<) Operation
    cout << "Left Shift: " << (a << 1) << endl; // 0101 << 1 = 1010 → 10

    // Right Shift(>>) Operation
    cout << "Right Shift: " << (a >> 1) << endl; // 0101 >> 1 = 0010 → 2

    return 0;
}
