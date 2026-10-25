#include <unordered_map>
#include <vector>
class Solution
{
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k)
    {
        std::unordered_map<int, int> mp; 
        for (int i = 0; i < (int)nums.size(); ++i)
        {
            int n = nums[i];
            if (mp.find(n) != mp.end())
                if (i - mp[n] <= k) return true;
            mp[n] = i;
        }

        return false;
    }
};