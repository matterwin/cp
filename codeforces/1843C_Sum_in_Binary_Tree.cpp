// https://codeforces.com/problemset/problem/1843/C
#include <iostream>
using namespace std;

void solve()
{
  long long n;
  cin >> n;
  long long sum = 0;
  while (n > 0) 
  {
    sum += n;
    n /= 2;
  }
  cout << sum << "\n"; 
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
