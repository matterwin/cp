// https://codeforces.com/problemset/problem/1623/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void solve()
{
  int n;
  cin>>n;
  vector<pair<int, int>> lines(n, {0, 0});

  int [1001] freq = {0};

  for (int i=0; i<n; ++i)
  {
    int l, r;
    cin>>l>>r;
    lines[i] = {l, r};
    freq[l]++;
    if (l != r)
      freq[r]++;
  }

  for (int i=0; i < n; ++i)
  {
    auto p = lines[i]; 
    int l_p = p.first, r_p = p.second;
    int d = -1;

    while (l_freq[l_p] > 1
    
    cout << p.first << " " << p.second << " " << d << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

