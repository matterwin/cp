// https://codeforces.com/problemset/problem/1669/G
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void dfs(vector<vector<char>>& mp, int i, int j)
{
  int n = mp.size();
  
  if (i+1 >= n || mp[i+1][j] == 'o' || mp[i+1][j] == '*')
    return;

  mp[i][j] = '.';
  mp[i+1][j] = '*';

  dfs(mp, i+1, j);  
}

void solve()
{
  int n,m;
  cin>>n>>m;
  cin.ignore();
  vector<vector<char>> mp(n, vector<char>(m));

  for (int i=0; i<n; i++)
  {
    string line;
    cin>>line;
    for (int j=0; j<m; ++j)
      mp[i][j] = line[j];
  }

  
  for (int i=n-1; i>=0; i--)
  {
    for (int j=m-1; j>=0; j--)
    {  
      if (mp[i][j] == '*')
        dfs(mp, i, j);
    }
  }

  for (int i=0; i<n; i++)
  {
    for (int j=0; j<m; j++)
      cout << mp[i][j];
    cout << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

