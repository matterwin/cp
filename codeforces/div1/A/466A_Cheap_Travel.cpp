#include <iostream>
using namespace std;
main()
{
  int n,m,a,b;
  cin>>n>>m>>a>>b;
  
  // greedy check
  bool g = 0;
  float worth_it = (float) b / m;
  g = worth_it <= a;

  float cost = 0;

  if (g)
  {
    // may not need the deal
    if (n < m)
    {
      if ((n * a) < b)
        cout << n * a << endl;
      else 
        cout << b << endl;
      return 0;
    } 
    else
    {
      cost = b * (n / m);
      n %= m;   
    }
    
    // leftover
    if (n > 0)
    {
      if (b < a)
        cout << (int) (cost + b) << endl;
      else 
        cout << (int)cost + (a * n) << endl;
    }
    else 
      cout << (int)cost << endl;
  }
  else 
  {
    cout << (a * n) << endl;
  }
}
