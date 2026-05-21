#include <iostream>
#include <string>
using namespace std;

void solve() 
{
  string s;
  cin >> s;
  int n = s.length();
  int res = n + 1;

  int last0 = -1, last5 = -1;

  for (int i = n - 1; i >= 0; i--) 
  {
    char c = s[i];

    if (last0 != -1)
      if (c == '0' || c == '5') 
        res = min(res, n - i - 2);

    if (last5 != -1)
      if (c == '2' || c == '7') 
        res = min(res, n - i - 2);

    if (last0 == -1 && c == '0') last0 = i;
    if (last5 == -1 && c == '5') last5 = i;
  }

  cout << res << endl;
}

int main() 
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

