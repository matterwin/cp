// https://codeforces.com/problemset/problem/902/B
#include <vector>
#include <iostream>
using namespace std;

void dfs(vector<vector<int>>& adj, int node, vector<int>& colors, int color)
{
  colors[node] = color;
  for (int child : adj[node])
    dfs(adj, child, colors, color);
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> adj(n+1, vector<int>(0, 0));
  
  for (int i=2; i<=n; i++)
  {
    int neighbor;
    cin >> neighbor;
    if (i < neighbor)
      adj[i].push_back(neighbor);
    else 
      adj[neighbor].push_back(i);
  }

  vector<int> colors(n+1, 0);
  int steps = 0;
  for (int i=1; i<=n; i++)
  {
    int color;
    cin >> color;
    if (colors[i] != color)
    {
      dfs(adj, i, colors, color);
      steps++;
    }
  }

  cout << steps << endl;
  return 0;
}

