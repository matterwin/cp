using namespace std;
class Solution {
public:
	int duplicateNumbersXOR(vector<int>& nums) {
		int freq[51];
		memset(freq, 0, sizeof(freq));

		int ret = 0;
		for (int n : nums) {
			freq[n]++;
			if (freq[n] == 2) ret ^= n;
		}

		return ret;
	}
};
