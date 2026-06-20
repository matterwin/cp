#include <bitset>
class Solution {
public:
	int minChanges(int n, int k) {
		bitset<32> bn(n), bk(k);
		bitset<32> xornk(n^k);

		int ret = 0;
		for (int i = 0; i < 32; ++i) {
			// mismatch
			if (xornk[i] == 1) {
				// k has the 1, not n
				if (bn[i] != 1) return -1;

				++ret;
			}
		}
		return ret;
	}
};
