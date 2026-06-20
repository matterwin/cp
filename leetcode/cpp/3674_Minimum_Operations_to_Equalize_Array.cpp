#include <vector>
using namespace std;
class Solution {
public:
	int minOperations(vector<int>& nums) {
		int n = nums[0];
		for (int& n : nums) {
			if (n != nums) return 1;	
		}
		return 0;
	}
};
