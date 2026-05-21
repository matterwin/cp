// https://codeforces.com/problemset/problem/1996/C
#include <bits/stdc++.h>
using namespace std;
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl             cout << '\n'
#define sci(x)         scanf("%d", &x)
#define scs(str)       scanf("%s", str)
#define ABS(x)         ((x) < 0 ? -(x) : (x))

void solve()
{
  int n, q;
  char a[200005], b[200005];
  sci(n); sci(q);
  scs(a); scs(b);

  vector<vector<int>> af(n + 1, vector<int>(26, 0));
  vector<vector<int>> bf(n + 1, vector<int>(26, 0));

  for (int i=1; i<=n; i++) 
  {
    for (int c=0;c<26; ++c) 
    {
      af[i][c] = af[i-1][c];
      bf[i][c] = bf[i-1][c];
    }
    af[i][a[i-1] - 'a']++;
    bf[i][b[i-1] - 'a']++;
  }

  while (q--) 
  {
    int l, r;
    sci(l); sci(r);

    int change = 0;
    for (int c=0; c<26; ++c) 
    {
      int countA = af[r][c] - af[l - 1][c];
      int countB = bf[r][c] - bf[l - 1][c];
      change += ABS(countA - countB);
    }

    printf("%d\n", change / 2);
  }
}

int main()
{
  fast;
  int t;
  sci(t);
  while (t--) solve();
  return 0;
}

