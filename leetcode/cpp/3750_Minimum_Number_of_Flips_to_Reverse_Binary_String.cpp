#include <bitset>
using namespace std;
class Solution {
public:
    int minimumFlips(int n) {
		bitset<32> bn(n);

		int l = 31 - __builtin_clz(n);
		int r = 0;

		int flips = 0;

		while (l > r) {
			if (bn[l] != bn[r])
				flips += 2;
			l--; r++;
		}
		return flips;
    }
};
