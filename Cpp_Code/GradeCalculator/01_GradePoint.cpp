#include<iostream>
using namespace std;

int main()
{
    int gradePoint;
    cout <<"-------------------------------" << endl;
    cout <<"  Grade Point to Letter Grade  " << endl;
    cout <<"-------------------------------" << endl;

    cout << "Enter your grade point (0-10): ";
    cin >> gradePoint;

    if(gradePoint < 0)
    {
        cout << "Error: Grade point cannot be negative." << endl;
    }
    else if(gradePoint <= 4)
    {
        cout << "Your grade is: U" << endl;
    }
    else if(gradePoint == 5)
    {
        cout << "Your grade is: C" << endl;
    }
    else if(gradePoint == 6)
    {
        cout << "Your grade is: B" << endl;
    }
    else if(gradePoint == 7)
    {
        cout << "Your grade is: B+" << endl;
    }
    else if(gradePoint == 8)
    {
        cout << "Your grade is: A" << endl;
    }
    else if(gradePoint == 9)
    {
        cout << "Your grade is: A+" << endl;
    }
    else if(gradePoint == 10)
    {
        cout << "Your grade is: O" << endl;
    }
    else
    {
        cout << "Error: Invalid grade point." << endl;
    }

    return 0;
}
