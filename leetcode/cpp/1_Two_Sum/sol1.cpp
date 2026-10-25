#include <vector>
#include <unordered_map>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i)
        {
            int n = nums[i];
            int diff = target - n;
            if (mp.find(diff) != mp.end())
                return {i, mp[diff]};
            mp[n] = i;
        }

        return {-1, -1};
    }
};
