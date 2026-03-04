// OOP - Classes and Objects
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    float gpa;

public:
    Student(string name, int age, float gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
        cout << "GPA  : " << gpa << endl;
    }
};

int main() {
    Student s1("Alice", 20, 3.8f);
    Student s2("Bob", 22, 3.5f);

    cout << "--- Student 1 ---" << endl;
    s1.display();

    cout << "--- Student 2 ---" << endl;
    s2.display();

    return 0;
}
