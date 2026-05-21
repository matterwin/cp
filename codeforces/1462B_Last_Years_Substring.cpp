// https://codeforces.com/problemset/problem/1462/B
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
#define prv1d(vec) for (const auto& x : vec) std::cout << x << " "; std::cout << "\n";
#define prv2d(vec2d) do { for (const auto& row : vec2d) { for (const auto& x : row) std::cout << x << " "; std::cout << "\n"; } } while(0)

void solve()
{
  int n; sci(n);
  char str[201];
  memset(str, 0, sizeof(str));
  scs(str);

  bool flag = 0;
  flag = (str[0] == '2' && str[1] == '0' && str[2] == '2' && str[3] == '0')
    || (str[0] == '2' && str[1] == '0' && str[2] == '2' && str[n-1] == '0')
    || (str[0] == '2' && str[1] == '0' && str[n-2] == '2' && str[n-1] == '0')
    || (str[0] == '2' && str[n-3] == '0' && str[n-2] == '2' && str[n-1] == '0')
    || (str[n-4] == '2' && str[n-3] == '0' && str[n-2] == '2' && str[n-1] == '0');

  if (flag)
    cy;
  else 
    cn;
}

int main()
{
  fast;
  int t;
  scanf("%d",&t);
  while (t--) solve();
  return 0;
}

