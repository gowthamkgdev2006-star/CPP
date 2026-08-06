#include<iostream>
using namespace std;

int main()
{
    float value;
    float totalValue;
    
    cout <<"------------------------------" << endl;
    cout <<"     Percentage Calculator    " << endl;
    cout <<"------------------------------" << endl;
    
    cout << "Enter Value: ";
    cin >> value;
    cout << "Enter the Total Value: ";
    cin >> totalValue;
    
 
    float percentage = (value * 100) / totalValue;

    cout << "\nThe percentage is : " << percentage << "%" << endl;

    return 0;
}
