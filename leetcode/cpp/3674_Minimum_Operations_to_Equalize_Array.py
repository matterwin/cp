class Solution:
    def minOperations(self, nums: List[int]) -> int:
        nn = nums[0]
        for n in nums:
            if n != nn:
                return 1
        return 0
