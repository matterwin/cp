#include <vector>
class Solution
{
public:
    int removeDuplicates(std::vector<int>& nums)
    {
        int k = 1; 
        for (int i = 0; i < (int)nums.size(); ++i)
            if (nums[i] > nums[k - 1])
                nums[k++] = nums[i];
        return k;
    }
};
