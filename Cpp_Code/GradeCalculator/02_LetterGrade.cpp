#include<iostream>
#include<string>
using namespace std;

int main()
{
    string letterGrade;
    cout <<"-------------------------------" << endl;
    cout <<"  Letter Grade to Grade point  " << endl;
    cout <<"-------------------------------" << endl;

    cout << "Enter the letter grade (O, A+, A, B+, B, C, U): ";
    cin >> letterGrade;

    if(letterGrade == "O" || letterGrade == "o") {
        cout << "The grade point is: 10" << endl;
    } else if(letterGrade == "A+" || letterGrade == "a+") {
        cout << "The grade point is: 9" << endl;
    } else if(letterGrade == "A" || letterGrade == "a") {
        cout << "The grade point is: 8" << endl;
    } else if(letterGrade == "B+" || letterGrade == "b+") {
        cout << "The grade point is: 7" << endl;
    } else if(letterGrade == "B" || letterGrade == "b") {
        cout << "The grade point is: 6" << endl;
    } else if(letterGrade == "C" || letterGrade == "c") {
        cout << "The grade point is: 5" << endl;
    } else if(letterGrade == "U" || letterGrade == "u") {
        cout << "The grade point is: 0 (Fail)" << endl;
    } else {
        cout << "Error: Invalid letter grade entered." << endl;
    }
    
    return 0;
}
