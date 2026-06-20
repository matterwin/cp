class Solution:
    def minBitwiseArray(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ret = [-1] * n

        for i in range(0, n):
            num = nums[i]
            if num % 2 == 0:
                continue
            
            bit = 1
            while num & bit:
                bit <<= 1
            ret[i] = (num ^ (bit >> 1))

        return ret
