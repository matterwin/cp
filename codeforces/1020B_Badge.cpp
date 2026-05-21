// https://codeforces.com/problemset/problem/1020/B
#include <iostream>
#include <vector>
using namespace std;

void dfs(int s, vector<int>& visited, vector<int>& students, int& res)
{
  while (visited[s] != '1')
  {
    visited[s] = '1';
    s = students[s];
  }
  res = s;
}

int main()
{
  int n;
  cin >> n;
  vector<int> students(n+1, 0);
  for (int i=1; i<=n; i++)
  {
    int student;
    cin >> student;
    students[i] = student;
  }

  for (int i=1; i<=n; i++)
  {
    vector<int> visited(n+1, 0);
    int res = -1;
    dfs(i, visited, students, res);
    cout << res << " ";
  }
    
  return 0;
}

