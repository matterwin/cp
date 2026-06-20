from typing import List

class Solution:
    def maximumStrongPairXor(self, nums: List[int]) -> int:
        n = len(nums)
        mx = 0

        for i in range(n):
            for j in range(i + 1, n):
                x, y = nums[i], nums[j]

                if abs(x - y) <= min(x, y):
                    mx = max(mx, x ^ y)

        return mx

