#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 0-1 Knapsack using bottom-up DP
int knapsack(int W, const vector<int>& wt, const vector<int>& val, int n) {
    // dp[i][w] = max value using first i items with capacity w
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    // Build table dp[][] in bottom up manner
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (wt[i - 1] <= w) {
                // Option 1: take the item
                int take = val[i - 1] + dp[i - 1][w - wt[i - 1]];
                // Option 2: skip the item
                int skip = dp[i - 1][w];
                dp[i][w] = max(take, skip);
            } else {
                // Can't take the item
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W]; // Max value with n items and full capacity W
}

int main() {
    int n = 4; // number of items
    vector<int> values = {60, 100, 120, 30};
    vector<int> weights = {10, 20, 30, 5};
    int W = 50; // capacity of knapsack

    int maxValue = knapsack(W, weights, values, n);
    cout << "Maximum value that can be taken = " << maxValue << endl;

    return 0;
}
