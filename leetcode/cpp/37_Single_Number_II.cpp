#include <vector>
using namespace std;
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int ones = 0, twos = 0;
		for (int& n : nums) {
			ones = (ones ^ x) & ~twos;
			twos = (twos ^ x) & ~ones;
		}
		return ones;
	}
};

