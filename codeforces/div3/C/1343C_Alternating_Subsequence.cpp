#include <iostream>
#include <vector>
#define lli long long int
using namespace std;
int main()
{
  int t, n;
  cin>>t;
  while (t--)
  {
    cin>>n;
    lli sum = 0, i, prev_i;
    bool prev_sign;
    cin>>i;

    sum += i;
    prev_sign = i > 0;
    prev_i = i;
    n--;

    while (n--)
    {
      cin>>i;
      int sign = i > 0;
      if (sign == prev_sign)  
      {
        if ((sum - prev_i + i) > sum)
        {
          sum = sum - prev_i + i;
          prev_i = i;
        }
      } 
      else 
      {
        sum += i;
        prev_i = i;
        prev_sign = sign;
      }
    }
    cout << sum << endl;
  }
  return 0;
}
