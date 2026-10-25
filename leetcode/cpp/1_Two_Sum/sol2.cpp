#include <vector>
#include <unordered_map>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        int freq[10001];
        memset(freq, 0, sizeof(freq));
        int indices[10001];
        memset(indices, -1, sizeof(freq));

        for (int i = 0; i < nums.size(); ++i)
        {
            int n = nums[i];
            int diff = target - n;
            if (freq[diff] != 0)
                return {indices[diff], i};
            indices[n] = i;
        }

        return {-1,-1};
    }
};
