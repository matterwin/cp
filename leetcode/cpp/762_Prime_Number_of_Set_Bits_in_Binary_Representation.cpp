class Solution {
public:
	bool is_prime(int bits) {
		if (bits < 2) return false;

		for (int i = 2; i * i <= bits; ++i) {
			if (bits % i == 0) return false;
		}
		return true;
	}
	int get_set_bits(int i) {
		int bits = 0;
		while (i > 0) {
			bits += (i & 1);
			i >>= 1;
		}
		return bits;
	}
	int countPrimeSetBits(int left, int right) {
		int ret = 0;
		for (int i = left; i <= right; ++i) {
			int set_bits = get_set_bits(i);
			if (is_prime(set_bits)) ++ret;
		}
		return ret;
	}
};

class Solution {
public:
	bool is_prime(int set_bits) {
		return set_bits == 2 || set_bits == 3 || set_bits == 5 ||
			   set_bits == 7 || set_bits == 11 || set_bits == 13 ||
			   set_bits == 17 || set_bits == 19;
	}
	int get_set_bits(int i) {
		int bits = 0;
		while (i > 0) {
			bits += (i & 1);
			i >>= 1;
		}
		return bits;
	}
	int countPrimeSetBits(int left, int right) {
		int ret = 0;
		for (int i = left; i <= right; ++i) {
			int set_bits = get_set_bits(i);
			if (is_prime(set_bits)) ++ret;
		}
		return ret;
	}
};

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;

        int mask = 665772;

        for (int x = left; x <= right; x++) {
            if ((mask >> __builtin_popcount(x)) & 1)
                ans++;
        }

        return ans;
    }
};


