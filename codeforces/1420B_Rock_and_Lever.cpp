// https://codeforces.com/problemset/problem/1420/B
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL);
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define fset(arr, val) memset(arr, val, sizeof(arr))
#define fset(arr, val) memset(arr, val, sizeof(arr))
#define fcopy(dest, src) memcpy(dest, src, sizeof(dest))
#define fmove(dest, src) memmove(dest, src, sizeof(dest))
#define fcmp(arr1, arr2) memcmp(arr1, arr2, sizeof(arr1))
#define sci(x) scanf("%d", &x)
#define scll(x) scanf("%lld", &x)
#define scs(str) scanf("%s", str)
#define scf(x) scanf("%f", &x)
#define scd(x) scanf("%lf", &x)
#define scc(x) scanf(" %c", &x)
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define lli long long int

int getMSB (int b)
{
  int pos=0;
  while (b > 0)
  {
    b >>= 1;
    pos++;
  }
  return pos;
}

void solve()
{
  int n;
  scanf("%d",&n);

  int msb[32];
  memset(msb,0,sizeof(msb));

  long long cnt=0;

  for (int i=0; i<n; ++i)
  {
    int b;
    scanf("%d", &b);

    int bit = getMSB(b);
    cnt += msb[bit];
    msb[bit]++;
  }

  cout << cnt;
  nl;
}

int main()
{
  fast;
  int t;
  scanf("%d",&t);
  while (t--) solve();
  return 0;
}
