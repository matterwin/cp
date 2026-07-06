#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
		std::string prefix = strs[0];
        int i = 0;

		for (;;) {
            for (const std::string& s : strs) {
				if (i >= s.size() || s[i] != prefix[i])
                    return prefix.substr(0, i);
            }

            ++i;
        }
    }
};
