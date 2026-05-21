#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() 
{
  int n;
  cin >> n;
  vector<int> a(n + 1, 0);
    
  for (int i = 1; i <= n; ++i)
  {
    int x;
    cin >> x;
    a[i] = a[i - 1] + x;
  }
    
  string s;
  cin >> s;
  
  int ans = 0;
  int l = 0;
  int r = n - 1;
    
  while (r > l)
  {
    while (l < n && s[l] == 'R') ++l;

    while (r >= 0 && s[r] == 'L') --r;
    
    if (l < r) 
    {
      ans += a[r + 1] - a[l];
      ++l;
      --r;
    }
  }
  
  cout << ans << endl;
}

int main() 
{
  int t;
  cin >> t;
  
  for (int i = 0; i < t; ++i) solve();
  
  return 0;
}

