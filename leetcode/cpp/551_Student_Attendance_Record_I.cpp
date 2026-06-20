#include <string>
using namespace std;
class Solution {
public:
	bool checkRecord(string s) {
		int L_cnt = 0, A_cnt = 0;
		for(char c : s) {
			if (c == 'A') {
				++A_cnt;
				L_cnt = 0;
				if (A_cnt == 2) return false;
			} else if (c == 'L') {
				++L_cnt;
				if (L_cnt == 3) return false;
			} else
				L_cnt = 0;
		}

		return true;
	}
};
