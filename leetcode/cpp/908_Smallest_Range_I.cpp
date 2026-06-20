#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int min_n = *min_element(nums.begin(), nums.end());
        int max_n = *max_element(nums.begin(), nums.end());

        // Original range = max_n - min_n
        // Increase min by k and decrease max by k:
        // (max_n - k) - (min_n + k)
        // = max_n - min_n - 2*k
        // If negative, the values can overlap, so answer is 0.

        return max(0, max_n - min_n - 2 * k);
    }
};
