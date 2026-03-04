// Variables and Data Types
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float height = 5.9f;
    double weight = 65.5;
    char grade = 'A';
    bool isStudent = true;
    string name = "Gowtham";

    cout << "Name    : " << name << endl;
    cout << "Age     : " << age << endl;
    cout << "Height  : " << height << " ft" << endl;
    cout << "Weight  : " << weight << " kg" << endl;
    cout << "Grade   : " << grade << endl;
    cout << "Student : " << boolalpha << isStudent << endl;

    return 0;
}
