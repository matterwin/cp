#include <vector>
using namespace std;
class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector<int> ret;
		for (int i = left; i <= right; ++i) {
			string str = to_string(i);
			bool flag = true;
			for (char c : str) {
				if (c == '0') {
					flag = false;
					break;
				}

				if (i % (c - '0') != 0) {
					flag = false;
					break;
				}
			}

			if (flag) ret.push_back(i);
		}
		return ret;
	}
};
