// https://codeforces.com/problemset/problem/1406/B
#include <bits/stdc++.h>
#include <cstdio>
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
#define ll long long int

void solve()
{
  ll n; scll(n);
  ll a[n];
  for (auto &x : a) scll(x);
  sort(a,a+n);

  long long best = LLONG_MIN;

  best = max(best, a[0] * a[1] * a[2] * a[3] * a[n - 1]);
  best = max(best, a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3]);
  best = max(best, a[n - 5] * a[n - 4] * a[n - 3] * a[n - 2] * a[n - 1]);

  cout << best; nl;
}

int main()
{
  fast;
  int t;
  scanf("%d",&t);
  while (t--) solve();
  return 0;
}

