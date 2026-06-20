#include <vector>
using namespace std;
class Solution {
public:
	int maximumProduct(vector<int>& nums) {
		int n = (int) nums.size();
		sort(nums.begin(), nums.end());

		if (nums.length() == 3) {
			return nums[0] * nums[1] * nums[2];
		}

		// potentially 2 negs
		int lhs1 = nums[0], lhs2 = nums[1];

		// biggest positives (potentially)
		int rhs1 = nums[n - 1], rhs2 = nums[n - 2], rhs3 = nums[n - 3];

		return max({rhs1 * rhs2 * rhs3, lhs1 * lhs2 * rhs1});
	}
};

#include <vector>
using namespace std;
class Solution {
public:
	int maximumProduct(vector<int>& nums) {
		int big1 = INT_MIN, big2 = INT_MIN, big3 = INT_MIN;
		int small1 = INT_MAX, small2 = INT_MAX;

		for (int n : nums) {
			if (n >= big1) {
				big3 = big2;
				big2 = big1;
				big1 = n;
			} else if (n >= big2) {
				big3 = big2;
				big2 = n;
			} else if (n >= big3) {
				big3 = n;
			}

			if (n <= small1) {
				small2 = small1;
				small1 = n;
			} else if (n <= small2) {
				small2 = n;
			}
		}

		return max({big1 * big2 * big3, big1 * small1 * small2});
	}
};

