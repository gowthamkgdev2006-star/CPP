#include<iostream>
#include<string>
using namespace std;

int main()
    {
        string name ="Gowtham K";
        int age = 20;
        
        cout << "Before updating variables" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

        //updating variables
        age = 21;

        cout << "\nAfter updating variables" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

        return 0;
    }
