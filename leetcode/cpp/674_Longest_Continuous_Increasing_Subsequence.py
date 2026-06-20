class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        n = len(nums)
        max_len, cur_len = 1, 1

        for i in range(1, n):
            if nums[i] > nums[i - 1]:
                cur_len += 1
            else:
                max_len = max(max_len, cur_len)
                cur_len = 1


        return max(max_len, cur_len)
