// https://codeforces.com/problemset/problem/1472/B
#include <iostream>
#include <vector>
using namespace std;

void solve()
{

  int n;
  cin>>n;

  int ones = 0, twos = 0;
  for (int i=0; i<n; i++)
  {
    int c;
    cin>>c;
    if (c == 1) ones++;
    else twos++;
  }

  int total = ones + (twos << 1);
  if (total % 2 != 0)
    cout << "NO\n" << endl;
  else
  {
    int half = total / 2;
    if (half % 2 == 1 && ones == 0)
      cout << "NO\n" << endl;
    else
      cout << "YES\n" << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
