#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> mp(n + 1, 0);
  for (int i = 1; i <= n; i++)
  {
    int manager;
    cin >> manager;
    mp[i] = manager;
  }

  int max_depth = 1;
  for (int i = 1; i <= n; i++)
  {
    int depth = 1;
    int ii = i;
    while (mp[ii] != -1)
    {
      depth++;
      ii = mp[ii];
    }
    max_depth = max(max_depth, depth); 
  }

  cout << max_depth << endl;
  return 0;
}
