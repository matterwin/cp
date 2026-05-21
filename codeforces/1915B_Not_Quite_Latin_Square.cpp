// https://codeforces.com/problemset/problem/1915/B
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL);
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define fset(arr, val) memset(arr, val, sizeof(arr))
#define sci(x) scanf("%d", &x)
#define scll(x) scanf("%lld", &x)
#define scs(str) scanf("%s", str)
#define scf(x) scanf("%f", &x)
#define scd(x) scanf("%lf", &x)
#define scc(x) scanf(" %c", &x)

void solve()
{
  char grid[3][3];
  fset(grid, 0);

  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      scc(grid[i][j]);

  for (int i=0; i<3; i++)
  {
    int mask = 0b000;
    for (int j=0; j<3; j++)
    {
      if (grid[i][j] == 'A') mask |= 1;
      else if (grid[i][j] == 'B') mask |= (1 << 1);
      else if (grid[i][j] == 'C') mask |= (1 << 2);
    }

    if (!((mask >> 0) & 1))
    {
      cout << "A\n";
      return;
    } 
    else if (!((mask >> 1) & 1))
    {
      cout << "B\n";
      return;
    }
    else if (!((mask >> 2) & 1))
    {
      cout << "C\n";
      return;
    }
  }
}

int main()
{
  fast;
  int t;
  scanf("%d",&t);
  while (t--) solve();
  return 0;
}

