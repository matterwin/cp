#include <vector>
using namespace std;
class Solution {
public:
	bool hasTrailingZeros(vector<int>& nums) {
		int evens = 0;
		for (int& n : nums) 
			if ((n & 1) == 0) 
				++evens;
				if (evens > 1) 
					return true;

		return evens > 1;
	}
};
