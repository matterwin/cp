#include <vector>
class Solution
{
public:
    int singleNumber(std::vector<int>& nums)
    {
        int ret = 0;
        for (int& n : nums) ret ^= n;
        return ret;
    }
};

// 2 2 1