#include <string>
using namespace std;
class Solution {
public:
	bool halvesAreAlike(string s) {
		auto isVowel = [](char c){
			c = tolower(c);
			return c == 'a' || c == 'e' || 
				   c == 'i' || c == 'o' || c == 'u';
		};

		int n = (int)s.length();
		int count = 0;
		for (int i = 0; i < n; ++i) {
			if (!isVowel(s[i])) continue;
			if (i < (n >> 1)) ++count;
			else --count;
		}

		return count == 0;
	}
};

