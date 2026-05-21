// https://codeforces.com/problemset/problem/501/B
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
  int q;
  cin>>q;

  unordered_map<string, string> mp; 
  for (int i=0; i<q; ++i)
  {
    string old, _new;
    cin>>old>>_new;

    if (mp.find(_new) == mp.end())
    {
      if (mp.find(old) != mp.end())
        mp[_new] = mp[old];
      else 
        mp[_new] = old;

      mp.erase(old);
    }
  }

  cout << mp.size() << endl;
  for (auto [k, v] : mp)
    cout << v << " " << k << endl;
  return 0;
}

