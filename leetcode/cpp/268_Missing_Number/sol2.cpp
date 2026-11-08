#include <vector>
class Solution
{
public:
    int missingNumber(std::vector<int>& nums)
    {
        int total = 0;
        for (int i = 0; i <= (int)nums.size(); ++i) total += i;
        return total - std::accumulate(nums.begin(), nums.end(), 0);
    }
};
