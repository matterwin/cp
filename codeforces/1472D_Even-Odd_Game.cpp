// https://codeforces.com/problemset/problem/1472/D
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve()
{
  int n;
  cin>>n;
  vector<int> a(n);
  for (int i=0; i<n; i++) 
    cin>>a[i];

  sort(a.begin(), a.end());

  long long sum = 0;
  int cnt=1;
  for (int i=n-1; i>=0; i--)
  {
    if (cnt)
    {
      if (a[i] % 2 == 0)
        sum += a[i];
    }
    else
    {
      if (a[i] % 2) sum -= a[i];
    }

    cnt ^= 1;
  }

  if (sum == 0)
    cout << "Tie\n";
  else if (sum > 0)
    cout << "Alice\n";
  else
    cout << "Bob\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

