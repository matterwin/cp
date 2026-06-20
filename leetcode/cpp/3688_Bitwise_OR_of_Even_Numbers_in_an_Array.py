class Solution:
    def evenNumberBitwiseORs(self, nums: List[int]) -> int:
        ret = 0
        for n in nums:
            if (n & 1) == 0:
                ret |= n
        return ret
