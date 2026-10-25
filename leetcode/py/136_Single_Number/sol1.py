class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        ret = 0
        for n in nums:
            ret = ret ^ n
        return ret