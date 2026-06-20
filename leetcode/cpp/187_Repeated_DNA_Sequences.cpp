#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
class Solution {
public:
	vector<string> findRepeatedDnaSequences(string s) {
		unordered_map<string, int> mp;
		for (int i = 0; i + 9 < s.length(); ++i) {
			mp[s.substr(i, 10)]++;
		}

		vector<string> ret;
		for (auto [k, v] : mp)
			if (v > 1)
				ret.push_back(k);

		return ret;
	}
};

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.size() < 10) return {};

        unordered_map<char, int> enc{
            {'A', 0},
            {'C', 1},
            {'G', 2},
            {'T', 3}
        };

		// 2 bits is enough
		// 2^2 = 4 possibilities
		// A = 00
		// C = 01
		// G = 10
		// T = 11

		// A	A	A	A	A	C	C	C	C	C
		// 00	00	00	00	00	01	01	01	01	01

		// That's 20 bits total.
		// Instead of storing the string, 
		// we store those 20 bits in an int.

		unordered_map<int, int> freq;
		vector<string> ans;

		int hash = 0;

		for (int i = 0; i < 10; ++i)
			hash = (hash << 2) | enc[s[i]];

		freq[hash] = 1;

		int mask = (1 << 20) - 1;

		for (int i = 10; i < s.size(); ++i) {
			hash = ((hash << 2) | enc[s[i]]) & mask;

			if (++freq[hash] == 2)
				ans.push_back(s.substr(i - 9, 10));
		}
    }
};

