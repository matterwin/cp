#include <vector>
using namespace std;
class Solution {
public:
	int maxProduct(vector<string>& words) {
		int n = words.size();
		vector<int> masks;
		for (string s : words) {
			int mask = 0;
			for (char c : s) {
				mask |= 1 << (c - 'a');
			}
			masks.push_back(mask);
		}

		int ans = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if ((masks[i] & masks[j]) == 0) {
					ans = max(ans, 
							(int)words[i].size() * (int)words[j].size());
				}
			}
		}

		return ans;
	}
};

