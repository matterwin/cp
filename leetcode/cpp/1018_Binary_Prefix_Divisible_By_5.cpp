#include <vector>
using namespace std;
class Solution {
public:
	vector<bool> prefixesDivBy5(vector<int>& nums) {
		vector<bool> ret;
		int cur = 0;

		for (int i = 0; i < nums.size(); ++i) {
			cur = (cur * 2 + nums[i]) % 5;
			ret.push_back(cur == 0);
		}
		return ret;
	}
};

