class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        n = len(nums)
        nums.sort()

        lhs1, lhs2 = nums[0], nums[1]
        rhs1, rhs2, rhs3 = nums[n - 1], nums[n - 2], nums[n - 3]

        return max(
            lhs1 * lhs2 * rhs1,
            rhs1 * rhs2 * rhs3
        )

