#include <vector>
using namespace std;
class Solution {
public:
	vector<int> minBitwiseArray(vector<int>& nums) {
		int n = (int)nums.size();
		vector<int> ret(n, -1);
		for (int i = 0; i < n; ++i) {
			// ret[i] | (ret[i] + 1) = nums[i]

			// 2	-> 0010
            // 3    -> 0011
			// 5	-> 0101
			// 7	-> 0111
			// 11	-> 1011
			// 13	-> 1101

			int num = nums[i];
			if (num % 2 == 0) continue;	

			int bit = 1;
			while (num & bit) bit <<= 1;
			ret[i] = (num ^ (bit >> 1));
		}
		return ret;
	}
};

Example 1:
num = 7

0111
 ^
first 0 is here (bit 8)

flip bit below it:

0111
  ^
0011 = 3

3 | 4 = 7

Key idea: find the first 0 from right. Then flip 

Example 2:
num = 11

1011

first 0 bit = 0100

flip bit below it:

1011 ^ 0010 = 1001 = 9

9 | 10 = 11

x | (x + 1) adding one flips the rightmost 0 to 1 and clears the trailing 1s

ex: 
x = 0011
x + 1 = 0100

the + 1 flips the trailing ones b/c its a binary system
