#include <vector>
using namespace std;
class Solution {
public:
	vector<vector<int>> ret;	
	vector<int> path;

	void dfs(vector<int>& nums, int start) {
		if (path.size() >= 2)
			ret.push_back(path);
		
		unordered_set<int> used;
		for (int i = start; i < nums.size(); ++i) {
			if (used.count(nums[i])) continue;

			// has to be non-decreasing
			if (!path.empty() && nums[i] < path.back()) continue;

			used.insert(nums[i]);

			path.push_back(nums[i]);
			dfs(nums, i + 1);
			path.pop_back();
		}
	}
	vector<vector<int>> findSubsequences(vector<int>& nums) {
		dfs(nums, 0);
		return ret;
	}
};

