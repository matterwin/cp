// https://codeforces.com/problemset/problem/702/A
#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
  int n;
  cin>>n;

  int res = 0, cur_cnt = 0;
  int prev = -1;
  while (n--)
  {
    int cur;
    cin>>cur;

    if (prev >= cur)
      cur_cnt = 0; 

    cur_cnt++;
    res = max(res, cur_cnt);
    prev = cur;
  }
  cout << res << endl;
  return 0;
}


