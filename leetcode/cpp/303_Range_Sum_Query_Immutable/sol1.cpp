class NumArray
{
public:
    std::vector<int> prefix;

    NumArray(std::vector<int>& nums)
    {
        int n = static_cast<int>(nums.size());

        prefix.resize(n + 1);
        prefix[0] = 0;

        for (int i = 0; i < n; ++i)
            prefix[i + 1] = prefix[i] + nums[i];
    }

    int sumRange(int l, int r)
    {
        return prefix[r + 1] - prefix[l];
    }
};