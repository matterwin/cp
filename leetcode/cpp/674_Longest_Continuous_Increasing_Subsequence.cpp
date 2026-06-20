#include <vector>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();

        int max_len = 1;
        int curr_len = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                curr_len++;
            } else {
                max_len = max(max_len, curr_len);
                curr_len = 1;
            }
        }

        return max(max_len, curr_len);
    }
};
