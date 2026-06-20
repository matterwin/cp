class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        ret = []
        cur = 0

        for i in range(len(nums)):
            cur = (cur * 2 + nums[i]) % 5
            ret.append(cur == 0)

        return ret
