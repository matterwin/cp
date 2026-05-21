// https://codeforces.com/problemset/problem/1355/B
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <algorithm>
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
  int n;
  scanf("%d",&n);

  vector<int> e(n,0);
  for(int i=0; i<n; i++)
    scanf("%d",&e[i]);

  sort(e.begin(), e.end());

  int g = 0;
  int count = 0;
  for (int i = 0; i < n; i++) 
  {
    count++;
    if (count >= e[i])
    {
      g++;
      count = 0;
    }
  }
  cout << g;
  nl;
}

int main()
{
  fast;
  int t;
  scanf("%d",&t);
  while (t--) solve();
  return 0;
}

