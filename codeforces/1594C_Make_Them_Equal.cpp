// https://codeforces.com/problemset/problem/1594/C
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve()
{
  int m = 0;
  vector<int> xs;
  int n;
  char c;
  string s;
  cin >> n >> c >> s;

  bool all_c = true;
  for (int i = 0; i < n; i++)
    if (s[i] != c)
      all_c = false;

  if (all_c)
  {
    cout << m << endl;
    return;
  }

  for (int x = 1; x <= n; x++)
  {
    bool ok = true;
    for (int i = x; i <= n; i += x)
    {
      if (s[i - 1] != c)
      {
        ok = false;
        break;
      }
    }
    if (ok)
    {
      m = 1;
      xs.push_back(x);
      break;
    }
  }

  if (m == 0)
  {
    m = 2;
    xs.push_back(n);
    xs.push_back(n - 1);
  }

  cout << m << endl;
  for (int x : xs)
    cout << x << " ";
  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}

