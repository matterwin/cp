// https://codeforces.com/problemset/problem/1324/C
#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

void solve()
{
  string s;
  getline(cin, s);
  int mn = 1, curr = 1;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'R')
    {
      curr = 1;
    }
    else 
      curr++;
    mn = max(curr, mn);
  }

  mn = max(curr, mn);
  cout << mn << endl;
}

int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--) solve();
  return 0;
}

