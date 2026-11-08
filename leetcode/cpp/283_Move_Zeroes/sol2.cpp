#include <vector>
#include <utility>
class Solution
{
public:
    void moveZeroes(std::vector<int>& nums)
    {
        int j = 0;
        for (int i = 0; i < len; ++i)
            if (nums[i] != 0)
               std::swap(nums[i], nums[j++]);
    }
};
