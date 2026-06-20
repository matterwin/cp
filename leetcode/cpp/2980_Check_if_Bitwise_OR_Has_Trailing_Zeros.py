class Solution:
    def hasTrailingZeros(self, nums: List[int]) -> bool:
        evens = 0
        for n in nums:
            if (n & 1) == 0:
                evens += 1
        return evens > 1

