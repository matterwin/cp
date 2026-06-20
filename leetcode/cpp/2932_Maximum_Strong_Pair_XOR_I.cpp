#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int x = nums[i], y = nums[j];

                if (abs(x - y) <= min(x, y)) {
                    mx = max(mx, x ^ y);
                }
            }
        }

        return mx;
    }
};
