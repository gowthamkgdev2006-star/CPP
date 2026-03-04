// OOP - Inheritance
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(string name) : name(name) {}

    void eat() {
        cout << name << " is eating." << endl;
    }

    virtual void sound() {
        cout << name << " makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {}

    void sound() override {
        cout << name << " says: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string name) : Animal(name) {}

    void sound() override {
        cout << name << " says: Meow!" << endl;
    }
};

int main() {
    Dog dog("Buddy");
    Cat cat("Whiskers");

    dog.eat();
    dog.sound();

    cat.eat();
    cat.sound();

    return 0;
}
