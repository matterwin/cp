// https://codeforces.com/problemset/problem/1829/D
#include <iostream>
using namespace std;

bool dfs(int n, int m)
{
  if (n == m) return true;

  if (n % 3 != 0 || n < m)
    return false;

  n /= 3;
  return dfs(n<<1, m) || dfs(n, m);
}

void solve()
{
  int n, m;
  cin >> n >> m;
  
  if (dfs(n, m))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

