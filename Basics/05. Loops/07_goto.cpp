#include<iostream>
using namespace std;

int main()
{
  int i = 1;

start: // Label
    cout << i << endl;
    i++;

    if(i <= 5)
    {
        goto start; // Jump back to the label
    }

    return 0;
}