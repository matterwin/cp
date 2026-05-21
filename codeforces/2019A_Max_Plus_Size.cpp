/* // https://codeforces.com/problemset/problem/2019/A */
/* #include <bits/stdc++.h> */
/* #include <cstdio> */
/* using namespace std; */
/* #define fast           ios_base::sync_with_stdio(false); cin.tie(NULL); */
/* #define cy             cout<<"YES\n" */
/* #define cn             cout<<"NO\n" */
/* #define nl             cout<<"\n" */
/* #define fset(arr, val) memset(arr, val, sizeof(arr)) */
/* #define fset(arr, val) memset(arr, val, sizeof(arr)) */
/* #define fcopy(dest, src) memcpy(dest, src, sizeof(dest)) */
/* #define fmove(dest, src) memmove(dest, src, sizeof(dest)) */
/* #define fcmp(arr1, arr2) memcmp(arr1, arr2, sizeof(arr1)) */
/* #define sci(x) scanf("%d", &x) */
/* #define scll(x) scanf("%lld", &x) */
/* #define scs(str) scanf("%s", str) */
/* #define scf(x) scanf("%f", &x) */
/* #define scd(x) scanf("%lf", &x) */
/* #define scc(x) scanf(" %c", &x) */
/* #define ABS(x) ((x) < 0 ? -(x) : (x)) */
/* #define prv1d(vec) for (const auto& x : vec) std::cout << x << " "; std::cout << "\n"; */
/* #define prv2d(vec2d) do { for (const auto& row : vec2d) { for (const auto& x : row) std::cout << x << " "; std::cout << "\n"; } } while(0) */

/* void solve() */
/* { */
/*   int n; sci(n); */
/*   vector<int> a(n); */

/*   for (auto &it : a) sci(it); */
/* } */

/* int main() */
/* { */
/*   fast; */
/*   int t; */
/*   scanf("%d",&t); */
/*   while (t--) solve(); */
/*   return 0; */
/* } */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMaxScore(const vector<int>& a, int n, int start) {
    int max_val = 0;
    int count = 0;
    for (int i = start; i < n; i += 2) {
        max_val = max(max_val, a[i]); // Track the maximum value
        count++;                      // Increment the count of selected elements
    }
    return max_val + count;            // Return the score
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Length of the array
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Array elements
        }

        // Compute the maximum score either starting from index 0 or from index 1
        int score_from_0 = getMaxScore(a, n, 0); // Start from index 0
        int score_from_1 = getMaxScore(a, n, 1); // Start from index 1

        // Output the maximum of the two scores
        cout << "max: ";
        cout << max(score_from_0, score_from_1) << endl;
    }

    return 0;
}

