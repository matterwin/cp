// https://codeforces.com/problemset/problem/1097/B
#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<int> &r, int curr_angle, int i, bool &stop)
{
  if (stop) return;

  if (i == r.size()) 
  {
    if ((curr_angle % 360 + 360) % 360 == 0) 
    {
      stop = true;
      cout << "YES\n";
    }
    return;
  }

  dfs(r, curr_angle + r[i], i+1, stop);
  dfs(r, curr_angle - r[i], i+1, stop);
}

int main()
{
  int n;
  cin>>n;

  vector<int> r(n);

  for (int i=0; i<n; i++)
    cin >> r[i];

  bool stop = false;
  dfs(r, 0, 0, stop); 

  if (stop == false)
      cout << "NO\n";
  
  return 0;
}
