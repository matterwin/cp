// https://codeforces.com/problemset/problem/862/B
#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& adj, vector<int>& visited, int i, int& A, int& B, bool flag)
{
  visited[i] = 1;
  if (flag) A++;
  else B++;

  for (int neighbor : adj[i])
    if (!visited[neighbor])
      dfs(adj, visited, neighbor, A, B, !flag);
}

int main()
{
  int n;
  cin>>n;

  vector<vector<int>> adj(n+1);
  for (int i=1; i<n; ++i)
  {
    int u, v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<int> visited (n+1, 0);
  int A = 0, B = 0;

  dfs(adj, visited, 1, A, B, true);

  cout << (1LL * A * B) - (n - 1) << endl;
  return 0;
}

