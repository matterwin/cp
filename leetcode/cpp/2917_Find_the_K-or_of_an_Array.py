class Solution:
    def findKOr(self, nums: List[int], k: int) -> int:
        freq = [0] * 32

        for n in nums:
            for b in range(32):
                if (n >> b) & 1:
                    freq[b] += 1

        res = 0
        for b in range(32):
            if freq[b] >= k:
                res |= (1 << b)

        return res
