#include<iostream>
using namespace std;

int main()
{
    int  n = 5;

    // Outer loop controls the rows.
    for(int i = 1; i <= n; i++)
    {
        // Inner loop controls the columns.
        for(int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}