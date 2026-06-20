#include <vector>
using namespace std;
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int m = prices.size();
		if (m == 1) return 0;

		// states:
		// 0: hold
		// 1: sold
		// 2: rest

		// dp[i][state] = maximum profit achievable up to day i, given that we are in "state"
		// max profit up to day i under that state
		vector<vector<int>> dp(m, vector<int>(3, 0));

		dp[0][0] = -prices[0];		// bought stock
		dp[0][1] = 0;				// not possible to sell first day
		dp[0][2] = 0;				// do nothing (rest)

		for (int i = 1; i < m; ++i) {
			// we are making a decision for this cur day
			// for each state based upon previous states

			// Max profit while HOLDING a stock on day i:
			// either:
			// 1. keep holding from yesterday
			// 2. buy today after resting yesterday
			dp[i][0] = max(
				dp[i - 1][0],				// already holding, do nothing
				dp[i - 1][2] - prices[i]	// buy today since you can (in rest state), but it costs $
			);

			// Max profit after SELLING on day i:
			// we must have been holding yesterday,
			// then sell today and gain today's price
			dp[i][1] = dp[i - 1][0] + prices[i];

			// Max profit while RESTING on day i:
			// either:
			// 1. continue resting
			// 2. enter cooldown after selling yesterday
			dp[i][2] = max(
				dp[i - 1][2],
				dp[i - 1][1]
			);
		}

		return max(dp[m - 1][1], dp[m - 1][2]);
	}
};

// "If I made optimal decisions so far, what is my net profit?"
