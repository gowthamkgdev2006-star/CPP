#include<iostream>
using namespace std;

int main()
{
    float value;
    float totalValue;
    float percentage;

    cout << "------------------------------" << endl;
    cout << "     Percentage Calculator    " << endl;
    cout << "------------------------------" << endl;

    cout << "Enter the current value: ";
    cin >> value;

    cout << "Enter the total value: ";
    cin >> totalValue;

    if(value <= 0 || totalValue <=0)
    {
        cout << "Error: Value and Total Value must be positive numbers." << endl;
    }
    else if(value > totalValue)
    {
        cout << "Error: Current value cannot be greater than Total Value." << endl;
    }
    else
    {
        percentage = (value / totalValue) * 100;
        cout << "\nThe percentage is: " << percentage << "%" << endl;
    }

    return 0;
}
