#include <vector>
#include <string>
#include <unordered_map>
class Solution 
{
public:
    string longestCommonPrefix(std::vector<std::string>& strs)
    {
        std::unordered_map<string, int> freq; 
        for (auto& s : strs)
            for (int i = 0; i < s.length(); ++i)
                freq[s.substr(0, i + 1)]++;
        string ret = "";
        for (auto [k, v] : freq)
            if (v == strs.size() && k.length() > ret.length())
                ret = k;
        return ret;
    }
};

