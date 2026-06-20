class Solution {
public:
	int bitwiseComplement(int n) {
		if (n == 0) return 1;
        int msb = 31 - __builtin_clz(n);
		// pushes 10000msb.... and the -1
		// gives us 01111msb...
        int mask = ~((1 << (msb + 1)) - 1);
        int result = n | mask;
        return ~result;
	}
};

