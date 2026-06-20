class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long mask = 0;
        int need = k;

        int ops = 0;

        for (int i = nums.size() - 1; i >= 0; --i) {
            int x = nums[i];

            if (x <= k && !(mask & (1LL << x))) {
                mask |= (1LL << x);
                --need;
            }

            ++ops;

            if (need == 0) return ops;
        }

        return ops;
    }
};
