#include<iostream>
using namespace std;

int main()
{
    int year = 2;
    char grade = 'B';

    switch (year)
    { 
        case 1:
            cout << "First year student" << endl;
            switch (grade)
            {
                case 'A':
                    cout << "Excellent" << endl;
                    break;
                case 'B':
                    cout << "Good" << endl;
                    break;
                case 'C':
                    cout << "Average" << endl;
                    break;
                default:
                    cout << "Invalid grade" << endl;
            }
            break;
        case 2:
            cout << "Second year student" << endl;
            switch (grade)
            {
                case 'A':
                    cout << "Excellent" << endl;
                    break;
                case 'B':
                    cout << "Good" << endl;
                    break;
                case 'C':
                    cout << "Average" << endl;
                    break;
                default:
                    cout << "Invalid grade" << endl;
            }
            break;
      
        case 3:
            cout << "Third year student" << endl;
            switch (grade)
            {
                case 'A':
                    cout << "Excellent" << endl;
                    break;
                case 'B':
                    cout << "Good" << endl;
                    break;
                case 'C':
                    cout << "Average" << endl;
                    break;
                default:
                    cout << "Invalid grade" << endl;
            }
            break;
        
        default:
            cout << "Invalid year" << endl;
    }

    return 0;
}
