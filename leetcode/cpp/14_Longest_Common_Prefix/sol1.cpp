#include <vector>
#include <string>
class Solution 
{
public:
    string longestCommonPrefix(std::vector<std::string>& strs)
    {
        std::string ret = "";
        for (int i = 0; i <= 200; ++i)
        {
            string prefix = strs[0].substr(0, i + 1);
            for (auto& s : strs)
            {
                if (i > s.length())
                    return ret;
                if (s.substr(0, i + 1) != prefix)
                    return ret;
            }
            ret = prefix;
        }
        return ret;
    }
};
