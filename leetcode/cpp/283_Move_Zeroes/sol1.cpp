class Solution
{
public:
    void moveZeroes(std::vector<int>& nums)
    {
        int j = -1;
        int len = (int)nums.size();
        for (int i = 0; i < len; ++i)
        {
            if (nums[i] != 0 && j != -1)
            {
                nums[j] = nums[i];
                nums[i] = 0;
                ++j;
            }
            else if (nums[i] == 0 && j == -1)
                j = i;
        }
    }
};