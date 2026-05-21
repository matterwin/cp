// https://codeforces.com/problemset/problem/1829/E
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int dfs (vector<vector<int>>& mp, int i, int j)
{
  int n = mp.size();
  int m = mp[0].size();
  if (i < 0 || j < 0 || i == n || j == m || mp[i][j] == 0)
    return 0;

  int curr_val = mp[i][j];
  mp[i][j] = 0;

  int total = curr_val;
  for (int d=0; d<4; ++d)
  {
    int x = i + dx[d];
    int y = j + dy[d];
    total += dfs(mp, x, y);
  }
  
  return total;
}

void solve()
{
  int n,m;
  cin>>n>>m;
  vector<vector<int>> mp(n, vector<int>(m));
  for (int i=0; i<n; i++)
  {
    for (int j=0; j<m; j++)
    {
      int c;
      cin >> c;
      mp[i][j] = c;
    }
  }

  int depth = 0;
  for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
      if (mp[i][j] != 0)
        depth = max(depth, dfs(mp, i, j)); 

  cout << depth << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
