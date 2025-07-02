#include <iostream>
using namespace std;
int main()
{
  for (int k = 1; k <= 10; k++)
  {
    for (int i = 1; i <= 10; i++)
    {
      cout << k * i << " ";
    }
    cout << endl;
  }

  return 0;
}