#include <string>
class Solution {
public:
	std::string freqAlphabets(std::string s) {
		std::string ret;

		for (int i = 0; i < s.size(); ++i) {
            string pos;
			pos.push_back(s[i]);
			
			if (i + 2 < s.size() && s[i + 2] == '#') {
				pos.push_back(s[i + 1]);
				i += 2;
			}
				
			ret.push_back('a' + std::stoi(pos) - 1);
		}
		return ret;
	}
};

