// https://codeforces.com/problemset/problem/1057/A
#include <iostream>
#include <vector>
using namespace std;

vector<int> ret;

bool dfs(int node, vector<int>& path, const vector<vector<int>>& graph, int target)
{
  path.push_back(node);

  if (node == target) 
  {
    ret = path;
    return true;
  }

  for (int child : graph[node]) 
    if (dfs(child, path, graph, target))
      return true;

  path.pop_back();
  return false;
}

int main() 
{
  int n;
  cin >> n;

  vector<vector<int>> graph(n + 1);

  for (int i = 2; i <= n; ++i) 
  {
    int parent;
    cin >> parent;
    graph[parent].push_back(i);
  }

  vector<int> path;
  dfs(1, path, graph, n);

  for (int node : ret)
    cout << node << " ";
  cout << endl;

  return 0;
}
