// https://codeforces.com/problemset/problem/1369/B
#include <iostream>
#include <string>
using namespace std;

void solve()
{
  int n;
  string s;
  cin >> n >> s;

  int i = 0;
  while (i < n && s[i] == '0') i++;
  int j = n - 1;
  while (j >= 0 && s[j] == '1') j--;

  if (i > j)
    cout << s << endl;
  else
  {
    string result = "";
    for (int k = 0; k < i; k++) result += '0';
    result += '0';
    for (int k = j + 1; k < n; k++) result += '1';
    cout << result << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
