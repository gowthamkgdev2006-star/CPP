#include <iostream>
#include <vector>
using namespace std;

int main() 
{
int sum = 0;
int pro = 1;
vector<int> demo = {2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};
for(int i = 0; i < demo.size(); i++)
{
  if(demo[i] % 2 == 0)
  {
    sum = sum + demo[i];
  } 
  else if(demo[i] % 2 == 1)
  {
     pro = pro * demo[i];
  }
}
 cout << "The sum of even numbers: " << sum << "\n";
 cout << "The product of odd numbers: " << pro << "\n";

return 0;
}




