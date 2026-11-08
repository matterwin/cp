class NumArray:
    def __init__(self, nums: list[int]):
        n = len(nums)
        self.prefix = [0] * (n + 1)
        for i in range(n):
            self.prefix[i + 1] = nums[i] + self.prefix[i]

    def sumRange(self, l: int, r: int) -> int:
        return self.prefix[r + 1] - self.prefix[l]
