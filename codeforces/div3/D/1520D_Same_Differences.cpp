#include <iostream>
#include <unordered_map>
#define lli long long int
using namespace std;
main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    unordered_map<int, lli> mp;
    lli ret = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
      // ai - i = aj + j
      cin>>x;
      ret += mp[x-i];
      mp[x-i] += 1;
    }
    cout << ret << endl;
  }
}
