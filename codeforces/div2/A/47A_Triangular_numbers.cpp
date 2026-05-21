#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int sum = 0;
  for (int l=1; ; l++)
  {
    sum += l;
    if (sum == n)
    {
      cout << "YES" << endl;
      break;
    }
    else if (sum > n)
    {
      cout << "NO" << endl;
      break;
    }
  }
  return 0;
}
