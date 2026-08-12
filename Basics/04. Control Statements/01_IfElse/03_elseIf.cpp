#include<iostream>
using namespace std;

int main()
{
    int mark = 50;

    if(mark >= 75)
    {
        cout << "Grade A" << endl;
    }
    // Executes only if the previous condition is false
    else if(mark >= 50)
    {
        cout << "Grade B" << endl;
    }
    else if(mark >= 35)
    {
        cout << "Grade C" << endl;
    }   
    else
    {
        cout << "Failed" << endl;
    }
    return 0;
}
