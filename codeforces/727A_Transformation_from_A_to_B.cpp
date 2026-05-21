// https://codeforces.com/problemset/problem/727/A
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  vector<int> res;
  res.push_back(b);

  while (b > a)
  {
    if (b % 2 == 0)
      b /= 2;
    else if (b % 10 == 1)
      b = (b - 1) / 10;
    else
    {
      cout << "NO\n";
      return 0;
    }
    res.push_back(b);
  }

  if (b == a)
  {
    cout << "YES\n";
    cout << res.size() << "\n";
    for (int i = res.size() - 1; i >= 0; --i)
      cout << res[i] << " ";
    cout << "\n";
  }
  else
    cout << "NO\n";

  return 0;
}
