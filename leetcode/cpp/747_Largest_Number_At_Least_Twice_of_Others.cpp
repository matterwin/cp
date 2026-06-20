#include <vector>
using namespace std;
class Solution {
public:
	int dominantIndex(vector<int>& nums) {
		int max_val = INT_MIN, max_idx = -1;
		int second_max = INT_MIN;

		for (int i = 0; i < nums.size(); ++i) {
			int n = nums[i];
			if (n > max_val) {
				second_max = max_val;
				max_val = n;
				max_idx = i;
			} else if (n > second_max) {
				second_max = n;
			}

		}

		return max_val >= second_max << 1 ? max_idx : -1;
	}
};
