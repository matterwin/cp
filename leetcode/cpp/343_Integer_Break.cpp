#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rec(int n, vector<int>& dp) {
        if (dp[n] != -1) return dp[n];

        int best = 0;

        for (int i = 1; i < n; ++i) {
			// maybe splitting the number isnt optimal,
			// so we do max(i, ...) and max(n - i, ...)
			// ex: 2 is optimal and 3
			//
			// n = 6
			// left goes	1 2 3 4 5
			// right goes	6 - 1 = 5, 6 - 2 = 4
			//				5 4 3 2 1 
			// we stop at n because that is the number
			// we are originally trying to find and split.
            int left = max(i, rec(i, dp));
            int right = max(n - i, rec(n - i, dp));

            best = max(best, left * right);
        }

        return dp[n] = best;
    }

    int integerBreak(int n) {
        vector<int> dp(n + 1, -1);
        dp[1] = 1;
        return rec(n, dp);
    }
};


// or a fast math solution:
// greedy solution recognizes
// maximize the number of 3s

class Solution {
public:
    int integerBreak(int n) {
        if (n <= 3) return n - 1;

        long long res = 1;
		// how many 3s we can have
        int k = n / 3;

        res = pow(3, k);

        if (n % 3 == 1)
            return (res / 3) * 4;

        return res * max(1, n % 3);
    }
};


