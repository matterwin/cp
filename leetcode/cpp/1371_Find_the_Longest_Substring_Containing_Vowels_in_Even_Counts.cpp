#include <string>
using namespace std;
class Solution {
public:
	int findTheLongestSubstring(string s) {
		// first[mask] stores the earliest index where a given 5-bit vowel parity state (mask) was seen.
		// There are 2^5 = 32 possible states since each vowel (a,e,i,o,u) can be even (0) or odd (1).
		// Initialize all states as unseen (-2). We set first[0] = -1 to handle substrings starting at index 0.
		vector<int> first(32, -2);
		first[0] = -1;

		int mask = 0, ans = 0;

		auto getBit = [](char c) -> int {
		    if (c == 'a') return 0;
			if (c == 'e') return 1;
			if (c == 'i') return 2;
			if (c == 'o') return 3;
			if (c == 'u') return 4;
			return -1;
		};

		for (int i = 0; i < s.size(); ++i) {
			int bit = getBit(s[i]);
			// toggling
			if (bit != -1) mask ^= (1 << bit);

            // first time seeing mask
			if (first[mask] == -2) first[mask] = i;

			// builds longest substring
			else ans = max(ans, i - first[mask]);
		}

		// mask[i] == mask[j] -> substring (i+1..j) is balanced
		return ans;
	}
};
