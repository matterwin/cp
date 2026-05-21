/* https://codeforces.com/problemset/problem/1384/A */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> indices(n);
  for (int i = 0; i < n; ++i)
    cin >> indices[i];

  vector<string> result;
  string prev_str(50, 'a');
  result.push_back(prev_str);

  for (int i = 0; i < n; ++i)
  {
    string str = prev_str;
    int idx = indices[i];

    if (str[idx] == 'a')
      str[idx] = 'b';
    else
      str[idx] = 'a';

    result.push_back(str);
    prev_str = str;
  }

  for (string &s : result)
    cout << s << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}

