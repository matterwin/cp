//https://codeforces.com/problemset/problem/1915/A
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define fast           ios_base::sync_with_stdio(false);
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define fset(arr, val) memset(arr, val, sizeof(arr))
#define sci(x) scanf("%d", &x)
#define scll(x) scanf("%lld", &x)
#define scs(str) scanf("%s", str)
#define scf(x) scanf("%f", &x)
#define scd(x) scanf("%lf", &x)

void solve()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int r = a^b^c;
  cout <<r;
  nl;
}

int main()
{
  fast;
  int t;
  sci(t);
  while (t--) solve();
  return 0;
}

