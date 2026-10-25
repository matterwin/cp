class Solution:
    def searchInsert(self, a: list[int], target: int) -> int:
        l, r = 0, len(a) - 1

        while l <= r:
            mid = l + (r - l) // 2

            if a[mid] == target:
                return mid
            if a[mid] < target:
                l = mid + 1
            else:
                r = mid - 1

        return l
