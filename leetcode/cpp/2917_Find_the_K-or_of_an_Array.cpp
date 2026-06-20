#include <vector>
using namespace std;
class Solution {
public:
	int findKOr(vector<int>& nums, int k) {
		int freq[32];
		memset(freq, 0, sizeof(freq));

		for (int& n : nums) {
			for (int b = 0; b < 32; ++b) {
				freq[b] += ((n >> b) & 1);
			}
		}

		int res = 0;
		for (int i = 0; i < 32; ++i) {
			if (freq[i] >= k) 
				res |= (1 << i);
		}

		return res;
	}
};
