#include <string>
using namespace std;
class Solution {
public:
	string sortString(string s) {
		int freq[26];
		memset(freq, 0, sizeof(freq));

		int cnt = s.length();
		for (char c : s) freq[c - 'a']++;

		string ret;
		while (cnt > 0) {
			for (int i = 0; i < 26; ++i) {
				if (freq[i]) {
					freq[i]--;
					cnt--;
					ret.push_back((char)('a' + i));
				}
			}

			for (int i = 25; i >= 0; --i) {
				if (freq[i]) {
					freq[i]--;
					cnt--;
					ret.push_back((char)('a' + i));
				}
			}
		}

		return ret;
	}
};


