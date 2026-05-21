#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
void shared_s(string s1, string s2, int& i)
{
  while (i < s1.length())
  {
    if (s1[i] == s2[i])
      i++;
    else 
      return;
  }
}

int main()
{
  int n;
  cin>>n;
  string s1, s2;

  cin>>s1;
  int ret = INT_MAX;

  while (--n)
  {
    cin>>s2;
    int j = 0;
    shared_s(s1, s2, j);
    ret = min(ret, j);
    s1 = s2;
  }

  cout << ret << endl;
  return 0;
}
