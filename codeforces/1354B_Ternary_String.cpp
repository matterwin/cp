// https://codeforces.com/problemset/problem/1354/B
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

void solve()
{
  string s;
  cin>>s;
  int ones = 0, twos = 0, threes = 0;
  int l = 0, r = 0;
  int res = 3e6;
  while (r < s.length())
  {
    if (s[r] == '1') ones++;
    else if (s[r] == '2') twos++;
    else threes++;

    while (ones > 0 && twos > 0 && threes > 0)
    {
      res = min(res, r - l + 1); 
      if (s[l] == '1') ones--;
      else if (s[l] == '2') twos--;
      else threes--;
      l++;
    }
    r++;
  }

  if (res == 3e6)
    res = 0;
  cout << res << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

