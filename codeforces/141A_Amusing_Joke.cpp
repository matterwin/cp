#include <bits/stdc++.h>
#include <cstdio>
#include <string>
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
    int abc[26];
    memset(abc, 0, sizeof(abc));
    string g, h, p;
    cin >> g >> h >> p;
    
    for (char c : g)
        abc[c-'A']++;
    for (char c : h)
        abc[c-'A']++;

    for (char c : p)
        abc[c-'A']--;

    for (int i=0; i<26; i++)
    {
        if (abc[i] != 0) 
        {
            cn;
            return 0;
        }
    }

    cy;
    return 0;
}

