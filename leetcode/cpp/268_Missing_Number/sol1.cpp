#include <vector>
class Solution
{
public:
    int missingNumber(std::vector<int>& nums)
    {
        int n = (int)nums.size();
        sort(nums.begin(), nums.end());

        int prev = 0;
        for (int i = 0; i < n; ++i)
        {
            int cur = nums[i];
            if (cur != prev) return prev; 
            ++prev;
        }
        return n;
    }
};
