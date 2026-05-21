// https://codeforces.com/problemset/problem/2091/B
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl cout << "\n"
#define sci(x) scanf("%d", &x)

void solve() 
{
  int n, x;
  sci(n); sci(x);
  vector<int> p(n);
  for (auto &i : p) sci(i);

  sort(p.begin(), p.end(), greater<int>());

  int groups = 0;
  int cnt = 0;

  for (int i = 0; i < n; ++i) 
  {
    cnt++;
    if (cnt * p[i] >= x) 
    {
      groups++;
      cnt = 0;
    }
  }

  cout << groups; nl;
}

int main() 
{
  fast;
  int t;
  scanf("%d", &t);
  while (t--) solve();
  return 0;
}

