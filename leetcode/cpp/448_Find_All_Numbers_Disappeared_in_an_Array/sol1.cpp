class Solution
{
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums)
    {
        int freq[100001];
        int n = static_cast<int>(nums.size());

        std::fill(freq, freq + 100001, 1);

        for (auto& nn : nums) --freq[nn];

        std::vector<int> ret;
        for (int i = 1; i <= n; ++i)
            if (freq[i] == 1)
                ret.push_back(i);

        return ret;
    }
};


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n = nums.size();

        // Pass 1: Mark numbers that appear
        for (int i = 0; i < n; i++) {

            int index = abs(nums[i]) - 1;

            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        // Pass 2: Find indices that were never marked
        vector<int> ans;

        for (int i = 0; i < n; i++) {

            if (nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};