#include <vector>
class Solution
{
public:
    int removeDuplicates(std::vector<int>& nums)
    {
        int k = 0; 
        int prev = -101;
        int take = 0;
        for (int i = 0; i < (int)nums.size(); ++i)
        {
            if (nums[i] > prev)
            {
                nums[take++] = nums[i];
                prev = nums[i];
                ++k;
            }
        }
        return k;
    }
};
