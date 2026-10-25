class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        i, j, k = m - 1, n - 1, m + n - 1

        while i >= 0 and j >= 0:
            n1, n2 = nums1[i], nums2[j]

            if n1 > n2:
                nums1[k] = n1
                i -= 1
            else:
                nums1[k] = n2
                j -= 1

            k -=1

        while j >= 0:
            nums1[k] = nums2[j]
            j -= 1 
            k -= 1