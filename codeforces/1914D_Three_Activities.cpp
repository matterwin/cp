#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;
#define fast           ios_base::sync_with_stdio(false);
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
void solve() {
  int n;
  scanf("%d",&n);
  vector<vector<int>> a(3, vector<int>(n));
  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < n; ++j)
      scanf("%d",&a[i][j]);

  vector<int> dp(8, 0); // dp[mask] where mask tracks used activities (000 to 111)

  for (int day = 0; day < n; ++day)
    for (int mask = 7; mask >= 0; --mask)
      for (int act = 0; act < 3; ++act)
        if ((mask >> act) & 1)
          dp[mask] = max(dp[mask], dp[mask ^ (1 << act)] + a[act][day]);

  cout << dp[7] << '\n'; // mask 111: all 3 activities done
}

int main()
{
  fast;
  int t;
  scanf("%d",&t);
  while (t--) solve();
  return 0;
}
