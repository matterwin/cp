#include <vector>
using namespace std;
class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		long xorAll = 0;

		for (int n : nums) xorAll ^= n;

		// n ^ n = 0 (pairs cancel)
		// a ^ b is what remains

		// a = 0101
		// b = 0011
		// xorAll = 0110

		// x =  0110
		// ~x = 1001
		// -x = 1010
		//
		// x & ~x = 0010
		//
		// gets our lowest set bit of x
		long diff = xorAll & (-xorAll);
		// really just need any bit where a and b are diff
		// so there are easier solutions for that but above
		// is a trick

		// so we have a set bit that distinguishes the 2 nums

		// just now xorall = a ^ b and we have a single number
		// that contains the diffs btw the 2 unique numbers

		// a = 0101
		// b = 0011
		// xorAll = 0110
		// diff = 0010
		//
		// a = 0101 & 0010 -> 0000 -> shows group a
		// b = 0011 & 0010 -> 0010 -> shows group b
		//
		// any other number would just fit into either group
		// and the dups cancel each other out
		//
		// ex: 4 = 0100 & 0010 -> 0000 -> goes to group a
		// we would see 4 again and it would cancel inside group a

		int a = 0, b = 0;

		for (int n : nums) {
			if (n & diff)	// group A
				a ^= n;
			else			// group B 
				b^= n;

			// duplicates go together
			// group a: a + (pairs that cancel)
			// group b: b + (pairs that cancel)

			// a ^ 0 = a
			// b ^ 0 = b
			
			// we use "diff" to achieve this
		}

		return {a, b};
	}
};
