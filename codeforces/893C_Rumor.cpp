// https://codeforces.com/problemset/problem/893/C
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int dfs(vector<vector<int>>& pairs, vector<int>& c, int player, vector<int>& visited)
{
  visited[player] = 1;
  int min_gold = c[player];

  for (int neighbor : pairs[player])
    if (!visited[neighbor])
      min_gold = min(min_gold, dfs(pairs, c, neighbor, visited));

  return min_gold;
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> c(n+1, 0);
  for (int i=1; i<=n; i++)
    cin >> c[i];

  vector<vector<int>> pairs(n+1);
  for (int i=1; i<=m; i++)
  {
    int f1, f2;
    cin >> f1 >> f2;
    pairs[f1].push_back(f2);
    pairs[f2].push_back(f1);
  }

  vector<int> visited(n+1, 0);
  long long gold = 0;
  for (int player=1; player<=n; player++)
    if (!visited[player])
      gold += dfs(pairs, c, player, visited);

  cout << gold << endl;
  return 0;
}

