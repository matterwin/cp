class Solution {
public:
	int minFlips(int a, int b, int c) {
		int ret = 0;
		while (a || b || c) {
			int rhs_a = a & 1;
			int rhs_b = b & 1;
			int rhs_c = c & 1;

			if ((rhs_a | rhs_b) != rhs_c) {
				if (rhs_c) {
					++ret;
				} else {
					ret += rhs_a + rhs_b;
				}
            }

			a >>= 1;
			b >>= 1;
			c >>= 1;
		}
		return ret;
	}
};


