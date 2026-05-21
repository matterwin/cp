// https://codeforces.com/problemset/problem/433/B
#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
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
#define prv1d(vec) for (const auto& x : vec) std::cout << x << " "; std::cout << "\n";
#define prv2d(vec2d) do { for (const auto& row : vec2d) { for (const auto& x : row) std::cout << x << " "; std::cout << "\n"; } } while(0)

void solve(vector<long long>& pre1, vector<long long>& pre2)
{
  int type, l, r;
  sci(type); sci(l); sci(r);

  long long sum = 0;
  if (type == 1)
    sum = pre1[r] - pre1[l - 1];
  else
    sum = pre2[r] - pre2[l - 1];

  cout << sum; nl;
}

int main()
{
    fast;
    int n;
    sci(n);
    vector<int> v(n);
    for (auto &x : v) sci(x);

    vector<long long> pre1(n+1, 0);
    for (int i=0; i<n; ++i)
      pre1[i+1] = pre1[i] + v[i];

    vector<int> s = v;
    sort(s.begin(), s.end());

    vector<long long> pre2(n + 1, 0);
    for (int i=0; i<n; ++i)
      pre2[i+1] = pre2[i] + s[i];

    int m;
    sci(m);
    while (m--) solve(pre1, pre2);

    return 0;
}

