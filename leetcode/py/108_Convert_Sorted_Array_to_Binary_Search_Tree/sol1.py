class Solution:
    def part(self, nums, left, right):
        if left > right:
            return None

        mid = left + (right - left) // 2
        root = TreeNode(nums[mid])

        root.left = self.part(nums, left, mid - 1)
        root.right = self.part(nums, mid + 1, right)

        return root


    def sortedArrayToBST(self, nums: list[int]) -> TreeNode | None:
        return self.part(nums, 0, len(nums) - 1)