#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;
class Solution {
public:
	vector<string> uncommonFromSentences(string s1, string s2) {
		unordered_map<string, int> mp;
		stringstream ss1(s1), ss2(s2);
		string word;

		while (ss1 >> word) mp[word]++;
		while (ss2 >> word) mp[word]++;
		
		vector<string> ret;
		for (auto [w, cnt] : mp) {
			// appears more than once
			if (cnt > 1) continue;
			ret.push_back(w);
		}

		return ret;
	}
};


