class Solution:
    def smallestRangeI(self, nums: List[int], k: int) -> int:
        min_n = min(nums)
        max_n = max(nums)

        return max(0, max_n - min_n - 2 * k)

