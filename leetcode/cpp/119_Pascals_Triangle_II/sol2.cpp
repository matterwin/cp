#include <vector>
class Solution
{
public:
    std::vector<int> getRow(int idx)
    {
        std::vector<int> ret;
        long long val = 1;
        for (int i = 0; i <= idx; ++i)
        {
            ret.push_back(val);
            val = val * (idx - i) / (i + 1);
        }
        return ret;
    }
};
