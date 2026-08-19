#include<iostream>
using namespace std;

int main()
{
    int n = 5;

    for(int i = 1; i <=n; i++)
    {
        if(i == 3)
        {
            continue; // Skip the rest of the loop body when i is 3
        }
        cout << i << endl;
    }
    return 0;
}