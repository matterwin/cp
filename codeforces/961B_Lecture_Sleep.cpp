// https://codeforces.com/problemset/problem/961/B
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
#define prv1d(vec) for (const auto& x : vec) std::cout << x << " "; std::cout << "\n";
#define prv2d(vec2d) do { for (const auto& row : vec2d) { for (const auto& x : row) std::cout << x << " "; std::cout << "\n"; } } while(0)

int main()
{
  fast;
  int n,k;
  sci(n); sci(k);

  vector<int> a(n,0);
  for (auto &_a : a) sci(_a);
  vector<int> t(n,0);
  for (auto &_t : t) sci(_t);

  int base = 0;
  for (int i = 0; i < n; ++i) 
  if (t[i] == 1) base += a[i];

  int current_gain = 0;

  for (int i = 0; i < k; ++i)
    if (t[i] == 0) current_gain += a[i];

  int max_gain = current_gain;

  for (int i = k; i < n; ++i) 
  {
    if (t[i] == 0) current_gain += a[i];
    if (t[i - k] == 0) current_gain -= a[i - k];
    max_gain = max(max_gain, current_gain);
  } 

  cout << base + max_gain; nl; 

  return 0;
}

