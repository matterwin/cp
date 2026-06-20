class Solution {
public:
	int smallestNumber(int n) {
		int ret = 1;
		while (n > 0) {
			n >>= 1;	
			ret = (ret << 1) | 1;
		}
		return ret >> 1;
	}
};

