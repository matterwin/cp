// https://codeforces.com/problemset/problem/1669/E
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  uint64_t ret = 0;
  unordered_map<string, int> freq;
  for (int i = 0; i < n; i++)
  {
    string curr;
    cin >> curr;

    for (int j = 0; j < 2; j++)
    {
      char original = curr[j];
      for (char c = 'a'; c <= 'z'; c++)
      {
        if (c == original)
          continue;
        curr[j] = c;
        ret += freq[curr];
      }
      curr[j] = original;
    }

    freq[curr]++;
  }

  cout << ret << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

