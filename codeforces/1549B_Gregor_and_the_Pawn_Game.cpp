#include <iostream>
#include <string>
using namespace std;

void complete_move (string& top, int& cnt, int i)
{
  cnt++;
  top[i] = '-';
}

void solve()
{
  int n;
  string top, bottom;
  cin >> n >> top >> bottom;

  int cnt = 0;

  for (int i = 0; i < n; i++)   
  {
    if (bottom[i] == '0')
      continue;

    if (top[i] == '0')
      complete_move(top, cnt, i);
    else if (i - 1 >= 0 && top[i - 1] == '1')
      complete_move(top, cnt, i - 1);
    else if (i + 1 < n && top[i + 1] == '1')
      complete_move(top, cnt, i + 1);
  }
  cout << cnt << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

