#include <vector>
using namespace std;
class Solution {
public:
	int evenNumberBitwiseORs(vector<int>& nums) {
		int ret = 0;
		for (int& n : nums)
			if ((n & 1) == 0)
				ret |= n;
		return ret;
	}
};

