#include <vector>
class Solution 
{
public:
    int removeElement(std::vector<int>& nums, int val)
    {
        int ret = 0, l = -1, r = 0;
        int n = (int)nums.size();

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == val)
            {
                l = i;
                break;
            }
        }

        if (l == -1) return n;

        r = l + 1;
        ret = l;
        while (r < n)
        {
            if (nums[r] != val)
            {
                nums[l] = nums[r];
                nums[r] = val;
                ++l;
                ++ret;
            }
            ++r;
        }
        return ret;
    }
};