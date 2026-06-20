#include <vector>
using namespace std;
class Solution {
public:
	int n;
	vector<double> prefix;
	vector<vector<double>> memo;

	// prefix sum lets us compute sum of any subarray [i..j] in O(1)
	// using prefix[j+1] - prefix[i]
	double avg(int i, int j) {
		return (prefix[j + 1] - prefix[i]) / (j - i + 1);
	}

	double dp(int i, int groups) {
		// Base case:
		// If only 1 group left, we must take the entire remaining suffix [i..n-1]
		// No more decisions to make.
		if (groups == 1) return avg(i, n - 1);

		// memo part
		if (memo[i][groups] != -1.0) 
			return memo[i][groups];

		double best = 0;

		// Try every possible end position j for the first group
		// First group is [i..j]
		// Remaining problem becomes dp(j+1, groups-1)
		//
		// Constraint: j <= n - groups ensures enough elements remain
		// to form the remaining (groups - 1) partitions.
		for (int j = i; j <= n - groups; j++) {
			best = max(best,
					   avg(i, j)              // score of current group
					   + dp(j + 1, groups - 1)); // best score of remaining suffix
		}

		// store it
		return memo[i][groups] = best;
	}

	double largestSumOfAverages(vector<int>& nums, int k) {
		n = nums.size();
		prefix.assign(n + 1, 0.0);
		memo.assign(n, vector<double>(k + 1, -1.0));

		// exclusive prefix sum for getting prefix sums
		// of the partitions
		for (int i = 0; i < n; ++i)
			prefix[i + 1] = prefix[i] + nums[i];

		return dp(0, k);
	}
};
