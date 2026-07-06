#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	vector<string> commonChars(vector<string>& words) {
		int mp[100][26];
		memset(mp, 0, sizeof(mp));

		int len = words.size();

		for (int i = 0; i < len; ++i) {
			string word = words[i];
			for (char c : word) {
				mp[i][c - 'a']++;
			}
		}

		vector<string> ret;
		for (int j = 0; j < 26; ++j) {
			int count = 0;
			int min_freq = INT_MAX;

			for (int i = 0; i < len; ++i) {
				int freq = mp[i][j];
                if (freq == 0) continue;

				++count;
				min_freq = min(min_freq, mp[i][j]);
			}

			if (count >= len) {
				string s(1, 'a' + j);
				while (min_freq--) ret.push_back(s);
			}
		}
		return ret;
	}
};

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26, INT_MAX);

        for (const string& word : words) {
            vector<int> freq(26, 0);

            for (char c : word) {
                freq[c - 'a']++;
            }

            for (int i = 0; i < 26; i++) {
                minFreq[i] = min(minFreq[i], freq[i]);
            }
        }

        vector<string> result;

        for (int i = 0; i < 26; i++) {
            while (minFreq[i]-- > 0) {
                result.emplace_back(1, 'a' + i);
            }
        }

        return result;
    }
};
