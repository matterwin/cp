// https://codeforces.com/problemset/problem/277/A
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

struct DSU
{
  vector<int> parent, rank;
  DSU(int n)
  {
    parent.resize(n);
    rank.assign(n, 0);
    for (int i = 0; i < n; i++) parent[i] = i;
  }
  int find(int x) { return parent[x] == x ? x : parent[x] = find(parent[x]); }

  void unite(int x, int y)
  {
    x = find(x); y = find(y);
    if (x == y) return;
    if (rank[x] < rank[y]) parent[x] = y;
    else
    {
      parent[y] = x;
      if (rank[x] == rank[y]) rank[x]++;
    }
  }
};

int main()
{
  int n,m;
  cin>>n>>m;

  DSU dsu(n + m);
  bool someoneKnows = false;

  for (int i=0; i<n; i++)
  {
    int k;
    cin>>k;
    if (k) someoneKnows = true;
    while(k--)
    {
      int lang;
      cin>>lang;
      dsu.unite(i, n+(lang-1));
    }
  }

  unordered_set<int> uniqueRoots;
  for (int i = 0; i < n; i++)
    uniqueRoots.insert(dsu.find(i));

  if (!someoneKnows) cout << n << endl;
  else cout << uniqueRoots.size() - 1 << endl;

  return 0;
}

