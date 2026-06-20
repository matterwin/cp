#include <vector>
using namespace std;
class Solution {
public:
	bool isOneBitCharacter(vector<int>& bits) {
		int n = (int) bits.size();

		bool flag = false;
		for (int i = 0; i < n - 1; ++i) {
			if (bits[i] == 1) flag = !flag;
			else if (flag == true) flag = false;
		}

		return !flag;
	}
};

