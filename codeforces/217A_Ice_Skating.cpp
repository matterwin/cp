// https://codeforces.com/problemset/problem/217/A
#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<bool>& visited, 
    vector<pair<int, int>>& points)
{
  visited[node] = true;
  for (int i=0; i<points.size(); ++i)
  {
    if (!visited[i] && (points[i].first == points[node].first 
          || points[i].second == points[node].second))
      dfs(i, visited, points);
  }
}

int main()
{
  int n;
  cin >> n;
  vector<bool> visited(n, false);
  vector<pair<int, int>> points(n, {0,0});

  for (int i=0; i<n; i++)
    cin >> points[i].first >> points[i].second;
  
  int components = 0;
  for (int i=0; i<n; i++)
  {
    if (!visited[i])
    {
      dfs(i, visited, points);
      components++;
    }
  }
  cout << components - 1 << endl;
  return 0;
}
