class Solution
{
public:
    int missingNumber(std::vector<int>& nums)
    {
        int n = nums.size();
        return (n * (n + 1)) / 2 - std::accumulate(nums.begin(), nums.end(), 0);
    }
};

// sum math
// S = 1 + 2 + ... (n - 1) + n
// S = n + (n - 1) + ... + + 2 + 1
// ------------------------------------- (add)
// 2s = (n + 1) + (n - 1 + 2) + ... + (n - 1 + 2) + (n + 1) 
//
// =
//
// 2s = (n + 1) + (n + 1) + ... + (n + 1)
//
// we have n n's, so
// 2s = n(n + 1)
// s = (n(n + 1)) / 2
