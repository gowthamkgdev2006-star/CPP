// OOP - Operator Overloading
#include <iostream>
using namespace std;

class Complex {
public:
    float real, imag;

    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex &other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.0f, 4.0f);
    Complex c2(1.5f, -2.0f);
    Complex c3 = c1 + c2;

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c1 + c2 = "; c3.display();

    return 0;
}
