// https://codeforces.com/problemset/problem/1829/F
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
  int n,m;
  cin>>n>>m;

  vector<vector<int>> adj(n+1);

  for (int i=1; i<=m; ++i)
  {
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int x = -1, y = -1; 
  for (int i=1; i<=n; ++i)
  {
    if (adj[i].size() == 1)
    {
      int y_node = adj[i][0]; 
      y = adj[y_node].size() - 1;
      for (int neighbor : adj[y_node])
      {
        if (adj[neighbor].size() > 1)
        {
          x = adj[neighbor].size();
          break;
        }
      }
      break;
    }
  }

  cout << x << " " << y << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

