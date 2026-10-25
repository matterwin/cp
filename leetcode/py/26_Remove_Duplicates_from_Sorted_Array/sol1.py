class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        take = 1
        for i in range(len(nums)):
            if nums[i] != nums[take - 1]:
                nums[take] = nums[i]
                take += 1

        return take