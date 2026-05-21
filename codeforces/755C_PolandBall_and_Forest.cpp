// https://codeforces.com/problemset/problem/755/C
#include <iostream>
#include <vector>
using namespace std;

struct DSU {
  vector<int> parent, rank;
  DSU (int n) 
  {
    parent.resize(n+1, 0);
    rank.resize(n+1, 0);
    for (int i=1; i<=n; i++)
      parent[i] = i;
  }

  int find(int n)
  {
    if (parent[n] == n)
      return n;
    return parent[n] = find(parent[n]);
  }

  void unite(int n1, int n2)
  {
    int x = find(n1), y = find(n2);
    if (x == y)
      return;

    if (rank[x] < rank[y])
      parent[x] = y;
    else
    {
      parent[y] = x;
      if (rank[x] == rank[y]) rank[x]++;
    }
  }

  int countRoots(int n) 
  {
    int count = 0;
    for (int i = 1; i <= n; i++)
      if (find(i) == i) count++;

    return count;
  }
};

int main()
{
  int n;
  cin>>n;

  vector<int> nodes(n+1);

  for (int i=1; i<=n; i++)
    cin>>nodes[i]; 

  DSU dsu(n);

  int ret = 0;
  for (int i=1; i<=n; i++)
    dsu.unite(i, nodes[i]);

  cout << dsu.countRoots(n) << endl;
  return 0;
}

