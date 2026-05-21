#include <iostream>
using namespace std;
main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n, x;
    cin>>n>>x;
    int odd = 0, even = 0, elem;
    while (n--)
    {
      cin>>elem;
      if (elem % 2 == 0) even++;
      else odd++;
    }
    int m = min(even, x - 1);
    int needed_odds = x - m;

    // odd + odd = even -> we don't want this
    if(needed_odds % 2 == 0)
      needed_odds++;

    if(odd >= needed_odds && needed_odds <= x)
      cout<<"Yes\n";
    else 
      cout<<"No\n";
  }
}
