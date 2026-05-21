#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int num, l=0, r=0;
    cin>>num;
    for (int i=0; i<6; i++)
    {
      if (i < 3)
        r += (num%10);
      else
        l += (num%10);

      num /= 10;
    }
    if (l == r)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
