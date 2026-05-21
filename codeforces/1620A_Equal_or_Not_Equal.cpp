// https://codeforces.com/problemset/problem/1620/A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve()
{
  string s;
  cin>>s;
  if (count(s.begin(), s.end(), 'N') == 1)
    cout << "NO\n";
  else 
    cout << "YES\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

