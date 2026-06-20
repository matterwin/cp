class Solution {
public:
	int countMonobit(int n) {
		int cnt = 1;
		long long val = 1;
		while (val <= n) {
			++cnt;
			val = val * 2 + 1; // builds 1, 3, 7, 15
		}
		return cnt;
	}
};
