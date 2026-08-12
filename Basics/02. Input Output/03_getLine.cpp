#include <iostream>
#include <string>
using namespace std;

int main()
{
  string comment;

  cout << "Please enter your comment: ";
  getline(cin, comment);// Read a line of input from the user
  cout << "Your comment: " << comment << endl;
  
  return 0;
}
