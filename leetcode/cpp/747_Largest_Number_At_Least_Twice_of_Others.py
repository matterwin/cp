class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        max_val = float('-inf')
        sec_max = float('-inf')
        max_idx = -1

        for i, n in enumerate(nums):
            if n > max_val:
                sec_max = max_val
                max_val = n
                max_idx = i
            elif n > sec_max:
                sec_max = n

        return max_idx if max_val >= 2 * sec_max else -1

