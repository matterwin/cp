#include <vector>
#include <iostream>
using namespace std;

bool dfs (vector<vector<int>>& mp, int i, int j)
{
  int cols = mp[0].size();
  if (i < 0 || i == 2 || j == cols || j < 0)
    return false;

  if (mp[i][j] == 1)
    return false;

  mp[i][j] = 1;

  if (i == 1 && j == cols - 1)
    return true;

  return 
    dfs(mp, i, j + 1) || 
    dfs(mp, i, j - 1) ||
    dfs(mp, i + 1, j) || 
    dfs(mp, i - 1, j) ||
    dfs(mp, i + 1, j + 1) || 
    dfs(mp, i + 1, j - 1) ||
    dfs(mp, i - 1, j + 1) || 
    dfs(mp, i - 1, j - 1);
}

void solve()
{
  int n;
  cin >> n;
  vector<vector<int>> mp(2, vector<int> (n, 0));

  string row1, row2;
  cin.ignore();
  getline(cin, row1);
  getline(cin, row2);

  for (int j = 0; j < n; j++)
  {
    mp[0][j] = row1[j] - '0';
    mp[1][j] = row2[j] - '0';
  }

  if (dfs(mp, 0, 0))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

