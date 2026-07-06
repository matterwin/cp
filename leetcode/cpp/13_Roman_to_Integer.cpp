#include <unordered_map>
#include <string>
class Solution {
public:
	int romanToInt(std::string s) {
		std::unordered_map<char, int> mp = {
			{'I', 1}, {'V', 5}, {'X', 10},
			{'L', 50}, {'C', 100}, {'D', 500},
			{'M', 1000}
		};

		int ans = 0;
		int len = (int)s.size();
		for (int i = 0; i < len; ++i) {
			int cur = mp[s[i]];
			if (i + 1 < len && cur < mp[s[i + 1]])
				ans -= cur;
			else
				ans += cur;
		}
		return ans;
	}
};

#include <string>
class Solution {
public:
	int romanToInt(std::string s) {
		auto value = [](char c) {
			switch (c) {
				case 'I': return 1;
				case 'V': return 5;
				case 'X': return 10;
				case 'L': return 50;
				case 'C': return 100;
				case 'D': return 500;
				case 'M': return 1000;
				default:  return 0;
			}
		};

		int ans = 0;
		int len = (int)s.size();
		for (int i = 0; i < len; ++i) {
			int cur = value(s[i]);
			if (i + 1 < len && cur < value(s[i + 1]))
				ans -= cur;
			else
				ans += cur;
		}
		return ans;
	}
};

